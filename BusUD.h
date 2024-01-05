#pragma once
#include <conio.h>
using namespace std;
#define TABLE_X 26
#define TABLE_Y 26
#ifndef BUSUD_H
#define BUSUD_H



class BusUD {
private:
    const int BUS_WIDTH = 5;
    const int BUS_HEIGHT = 12;

    int posx, posy;
    int oldx, oldy;
    int color;

public:


    void xyputstr(int x, int y, const char* str);
    
    BusUD(int X, int Y, int color);
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
#endif BUSUD_H