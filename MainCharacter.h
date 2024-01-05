#pragma once
#include <conio.h>
using namespace std;
#define TABLE_X 26
#define TABLE_Y 26
#ifndef MainCharacter_H
#define MainCharacter_H



class MainCharacter {
private:
    const int CHARACTER_WIDTH = 8;
    const int CHARACTER_HEIGHT = 4;
    int color;
    int posx;
    int posy;
    int oldx;
    int oldy;
public:

    void xyputstr(int x, int y, const char* str);

    MainCharacter(int X, int Y, int color);
    /*
    int getX();
    void setX(int x);
    int getY();
    void setY(int y);
    */
    //bool isCollision(int x, int y);
    
    void clearCharacter(int x, int y);
    void drawCharacter(int x, int y);
    //void Move(int key, MainCharacter& character, Bus& bus);

    void Move(int key);

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
#endif MainCharacter_H