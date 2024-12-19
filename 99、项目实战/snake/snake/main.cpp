#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

#define H 28
#define W 60
const int dir[4][2] = {
    {-1, 0},   // ÉÏ 
    {0, 1},    // ÓÒ
    {1, 0},    // ÏÂ
    {0, -1}    // ×ó
};
enum BlockType {
    EMPTY = 0,
    FOOD = 1,
};
struct Map {
    BlockType data[H][W];
    bool hasFood;
};
struct Pos {
    int x;
    int y;
};
struct Snake {
    Pos snake[H * W];
    int snakeDir;
    int snakeLength;
    int lastMoveTime;
    int moveFreqency;
};
void hideCursor() {
    HANDLE hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO curInfo = { 1, FALSE };
    SetConsoleCursorInfo(hOutput, &curInfo);
}

void initMap(Map* map) {
    for (int y = 0; y < H; ++y) {
        for (int x = 0; x < W; ++x) {
            map->data[y][x] = BlockType::EMPTY;
        }
    }
    map->hasFood = false;
}
void initSnake(Snake* snk) {
    snk->snakeLength = 3;
    snk->snakeDir = 1;
    snk->snake[0] = { W / 2, H / 2 };
    snk->snake[1] = { W / 2 - 1, H / 2 };
    snk->snake[2] = { W / 2 - 2, H / 2 };
    snk->lastMoveTime = 0;
    snk->moveFreqency = 200;
}
void drawUnit(Pos p, const char unit[]) {
    COORD coord;
    HANDLE hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    coord.X = p.x + 1;
    coord.Y = p.y + 1;
    SetConsoleCursorPosition(hOutput, coord);
    cout << unit;
}
void drawMap(Map* map) {
    system("cls");
    cout << "©³";
    for (int x = 0; x < W; ++x) {
        cout << "©¥";
    }
    cout << "©·" << endl;

    for (int y = 0; y < H; ++y) {
        cout << "©§";
        for (int x = 0; x < W; ++x) {
            if (map->data[y][x] == BlockType::EMPTY) {
                cout << " ";
            }
        }
        cout << "©§" << endl;
    }
    cout << "©»";
    for (int x = 0; x < W; ++x) {
        cout << "©¥";
    }
    cout << "©¿";
}
void drawSnake(Snake* snk) {
    for (int i = 0; i < snk->snakeLength; ++i) {
        drawUnit(snk->snake[i], "¡ö");
    }
}

void checkChangeDir(Snake* snk) {
    if (_kbhit()) {
        switch (_getch()) {
        case 'w':
            if (snk->snakeDir != 2)
                snk->snakeDir = 0;
            break;
        case 'd':
            if (snk->snakeDir != 3)
                snk->snakeDir = 1;
            break;
        case 's':
            if (snk->snakeDir != 0)
                snk->snakeDir = 2;
            break;
        case 'a':
            if (snk->snakeDir != 1)
                snk->snakeDir = 3;
            break;
        default:
            break;
        }
    }
}

bool checkOutOfBound(Pos p) {
    if (p.x == 0 || p.x == W + 1) {
        return true;
    }
    if (p.y == 0 || p.y == H + 1) {
        return true;
    }
    return false;
}

void moveSnake(Snake* snk) {
    for (int i = snk->snakeLength - 1; i >= 1; --i) {
        snk->snake[i] = snk->snake[i - 1];
    }
    snk->snake[0].y += dir[snk->snakeDir][0];
    snk->snake[0].x += dir[snk->snakeDir][1];
}

void checkEatFood(Snake* snk, Pos tail, Map* map) {
    Pos head = snk->snake[0];
    if (map->data[head.y][head.x] == BlockType::FOOD) {
        snk->snake[snk->snakeLength++] = tail;
        map->data[head.y][head.x] = BlockType::EMPTY;
        map->hasFood = false;
        drawUnit(tail, "¡ö");
    }
}

bool doMove(Snake* snk, Map* map) {
    Pos tail = snk->snake[snk->snakeLength - 1];
    drawUnit(snk->snake[snk->snakeLength - 1], " ");
    moveSnake(snk);
    if (checkOutOfBound(snk->snake[0])) {
        return false;
    }
    checkEatFood(snk, tail, map);
    drawUnit(snk->snake[0], "¡ö");
    return true;
}

bool checkSnakeMove(Snake* snk, Map* map) {
    int curTime = GetTickCount();
    if (curTime - snk->lastMoveTime > snk->moveFreqency) {
        if (false == doMove(snk, map))
            return false;
        snk->lastMoveTime = curTime;
    }
    return true;
}

void checkFoodGenerate(Snake* snk, Map* map) {
    if (false == map->hasFood) {
        while (1) {
            int x = rand() % W;
            int y = rand() % H;
            int i = 0;
            while (i < snk->snakeLength) {
                if (snk->snake[i].x == x && snk->snake[i].y == y) {
                    break;
                }
                ++i;
            }
            if (i == snk->snakeLength) {
                map->data[y][x] = BlockType::FOOD;
                map->hasFood = true;
                drawUnit({ x,y }, "¡ñ");
                return;
            }
        }
    }
}

void initGame(Snake* snk, Map* map) {
    hideCursor();
    initMap(map);
    initSnake(snk);
    drawMap(map);
    drawSnake(snk);
}

int main() {
    Map map;
    Snake snk;
    initGame(&snk, &map);
    while (1) {
        checkChangeDir(&snk);
        if (false == checkSnakeMove(&snk, &map))
            break;
        checkFoodGenerate(&snk, &map);
    }
    drawUnit({ W / 2 - 4, H / 2 }, "Game Over");
    while (1) {}
    return 0;
}
