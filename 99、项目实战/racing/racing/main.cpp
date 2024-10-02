#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <vector>
using namespace sf;

const int WinWidth = 1024;
const int WinHeight = 768;
const int roadWidth = 1800;
const int roadSegLength = 180;
const int roadCount = 1884;
const int itemSize = 450;
const char charItem[] = "1234567890+*/-%";

struct Road {
    float x, y, z;
    float X, Y, W;
    float scale, curve;
    Sprite spr;
    int operatorIndex;
    int numberIndex;

    Road(int _x, int _y, int _z, float _c, Sprite _spr) : x(_x), y(_y), z(_z), curve(_c), spr(_spr) {
        generateItem(false);
    }

    void generateItem(bool bAlwaysGen) {
        if (bAlwaysGen || rand() % 200 == 0) {
            operatorIndex = (rand() % 5) + 10;
            numberIndex = rand() % 10;
            if (numberIndex == 9) {
                numberIndex = 0;
            }
        }
        else {
            operatorIndex = -1;
        }
    }


    void project(int camX, int camY, int camZ) {
        scale = 1.0f / (z - camZ);
        X = (1 + (x - camX) * scale) * WinWidth / 2;
        Y = (1 - (y - camY) * scale) * WinHeight / 2;
        W = scale * roadWidth * WinWidth / 2;
    }

    void drawItem(RenderWindow& window, int index, int xPlacement) {
        Sprite s = spr;
        int left = (index % 5) * itemSize;
        int top = (index / 5) * itemSize;

        s.setTextureRect(IntRect(left, top, itemSize, itemSize));
        s.setScale(W / itemSize, W / itemSize);
        s.setPosition(X + xPlacement*W, Y - W);
        window.draw(s);
    }

    void drawItem(RenderWindow& window) {
        if (operatorIndex == -1) {
            return;
        }
        drawItem(window, operatorIndex, -1);
        drawItem(window, numberIndex, 0);
    }
};

void DrawTrape(RenderWindow& window, Color c, int x1, int y1, int w1, int x2, int y2, int w2) {
    ConvexShape polygon(4);
    polygon.setFillColor(c);
    polygon.setPoint(0, Vector2f(x1- w1, y1));
    polygon.setPoint(1, Vector2f(x2- w2, y2));
    polygon.setPoint(2, Vector2f(x2+ w2, y2));
    polygon.setPoint(3, Vector2f(x1+ w1, y1));
    window.draw(polygon);
}

void DrawNumber(RenderWindow& window, Sprite sitem, int number, int x, int y) {
    char ch[100] = { '\0' };
    _itoa_s(number, ch, 10);
    int len = strlen(ch);
    for (int i = 0; i < len; ++i) {
        Sprite s = sitem;
        int index = -1;
        for (int j = 0; j < charItem[j]; ++j) {
            if (charItem[j] == ch[i]) {
                index = j;
            }
        }
        int left = (index % 5) * itemSize;
        int top = (index / 5) * itemSize;
        s.setTextureRect(IntRect(left, top, itemSize, itemSize));
        s.setScale(0.18, 0.18);
        s.setPosition(x + 0.13*i*itemSize, y);
        window.draw(s);
    }
}

int caculateScore(int score, int operatorIndex, int numberIndex) {
    char op = charItem[operatorIndex];
    int number = charItem[numberIndex] - '0';
    if (op == '+') {
        return score + number;
    }
    else if (op == '-') {
        return score - number;
    }
    else if (op == '*') {
        return score * number;
    }
    else if (op == '/') {
        return score / number;
    }
    return score % number;
}

int main()
{
    RenderWindow window(VideoMode(WinWidth, WinHeight), "Racing");
    window.setFramerateLimit(60);
    Texture bg;
    bg.loadFromFile("cloud.png");
    Sprite s(bg, IntRect(0, 0, WinWidth, WinHeight / 2));

    Texture item;
    item.loadFromFile("item.png");
    Sprite sitem(item);

    SoundBuffer buffer[5];
    Sound sound, bgm;
    buffer[0].loadFromFile("get.mp3");
    buffer[1].loadFromFile("jump.mp3");
    buffer[2].loadFromFile("falldown.mp3");
    buffer[3].loadFromFile("tianfuyue.mp3");
    buffer[4].loadFromFile("liumaishenjian.mp3");

    bgm.setBuffer(buffer[3]);
    bgm.setLoop(true);
    bgm.play();
    int score = 0;

    std::vector<Road> roads;
    for (int i = 0; i < roadCount; i++) {
        float curve = (i > 0 && i < 300) ? 0.5 : -0.5;
        Road r(0, 0, (i + 1) * roadSegLength, curve, sitem);
        roads.push_back(r);
    }
    int cameraX = 0;
    float cameraY = 1600;
    int cameraZ = 0;
    int speed = 100;
    bool isJumping = false;
    float dy = 0, y = 0;

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
        if (Keyboard::isKeyPressed(Keyboard::Up)) {
            speed += 2;
            if (speed > 1000) speed = 1000;
            if (speed == 500) {
                speed = 502;
                bgm.setBuffer(buffer[4]);
                bgm.play();
            }
        }
        if (Keyboard::isKeyPressed(Keyboard::Down)) {
            speed -= 2;
            if (speed < 100) speed = 100;
            if (speed == 500) {
                speed = 498;
                bgm.setBuffer(buffer[3]);
                bgm.play();
            }
        }
        cameraZ += speed;

        if (Keyboard::isKeyPressed(Keyboard::Left)) cameraX -= 100;
        if (Keyboard::isKeyPressed(Keyboard::Right)) cameraX += 100;

        if (Keyboard::isKeyPressed(Keyboard::Space) && !isJumping) {
            sound.setBuffer(buffer[1]);
            sound.play();
            isJumping = true;
            dy = 150;
        }
        if (isJumping) {
            dy -= 5;
            y += dy;
            if (y <= 0) {
                y = 0;
                isJumping = false;
                sound.setBuffer(buffer[2]);
                sound.play();
            }
        }
        int totalLength = roadCount * roadSegLength;
        if(cameraZ >= totalLength) cameraZ -= totalLength;
        if(cameraZ < 0) cameraZ += totalLength;
        window.clear();
        int roadIndex = cameraZ / roadSegLength;
        float x = 0, dx = 0;
        cameraY = 1600 + roads[roadIndex].y;
        int minY = WinHeight;
        for (int i = roadIndex; i < roadIndex + 300; ++i) {
            Road &now = roads[i % roadCount];
            now.project(cameraX - x, cameraY + y, cameraZ - (i >= roadCount ? totalLength : 0) );
            dx += now.curve;
            x += dx;
            if (!i) {
                continue;
            }
            if (now.Y >= WinHeight) {
                if (!isJumping && now.operatorIndex != -1) {
                    score = caculateScore(score, now.operatorIndex, now.numberIndex);
                    now.operatorIndex = -1;
                    roads[ (i+1500) % roadCount ].generateItem(true);
                    sound.setBuffer(buffer[0]);
                    sound.play();
                }
            }
            if (now.Y < minY) {
                minY = now.Y;
            }
            else {
                continue;
            }
            s.setTextureRect(IntRect(0, 0, WinWidth, minY));
            window.draw(s);
            DrawNumber(window, sitem, score, 10, 10);
            Road& pre = roads[ (i - 1) % roadCount];
            Color grass = (i / 3) % 2 ? Color(16, 210, 16) : Color(0, 199, 0);
            Color edge = (i / 3) % 2 ? Color(0, 0, 0) : Color(255, 255, 255);
            Color road = (i/3) % 2 ? Color(105, 105, 105) : Color(101, 101, 101);
            DrawTrape(window, grass, pre.X, pre.Y, WinWidth*10, now.X, now.Y, WinWidth*10);
            DrawTrape(window, edge, pre.X, pre.Y, pre.W*1.3, now.X, now.Y, now.W*1.3);
            DrawTrape(window, road, pre.X, pre.Y, pre.W, now.X, now.Y, now.W);
        }
        for (int i = roadIndex + 300; i > roadIndex; --i) {
             roads[i % roadCount].drawItem(window);
        }

        window.display();
    }
    return 0;
}