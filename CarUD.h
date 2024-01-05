#pragma once
#include <conio.h>
using namespace std;
#define TABLE_X 26
#define TABLE_Y 26
#ifndef CARUD_H
#define CARUD_H

class CarUD {
private:
    const int CAR_WIDTH = 5;
    const int CAR_HEIGHT = 8;
    int color;
    int table[TABLE_Y][TABLE_X];
public:
    int posx, posy;
    CarUD(int X, int Y, int color);
    void clearCharacter(int x, int y);
    void drawCharacter(int x, int y);
    void Move(int key);
    /*
    int getX();
    void setX(int x);
    int getY();
    void setY(int y);
    */
    int getkey() {
        int ch = _getch();
        if (ch != 0xe0)
            return ch;
        else {
            int ch2 = _getch();
            return (0xe000 | ch2);
        }
    }
};
#endif CARUD_H