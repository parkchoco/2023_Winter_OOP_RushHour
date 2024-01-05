#pragma once
#include <conio.h>
using namespace std;
#define TABLE_X 26
#define TABLE_Y 26
#ifndef BUSRL_H
#define BUSRL_H



class BusRL {
private:
    const int BUS_WIDTH = 12;
    const int BUS_HEIGHT = 4;
    int color;

    int posx;
    int posy;
    int oldx;
    int oldy;
public:
    BusRL(int X, int Y, int color);

    void clearCharacter(int x, int y);
    void drawCharacter(int x, int y);

    void Move(int key);

    void xyputstr(int x, int y, const char* str);
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
#endif BUSRL_H