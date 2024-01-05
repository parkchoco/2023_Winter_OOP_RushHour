#include "CarUD.h"
#include <conio.h>
#include <iostream>
#include "Consola.h"
#include "keycode.h"
using namespace std;

void xyputstr(int x, int y, const char* str) {
    gotoxy(x, y);
    cout << str;
}


CarUD::CarUD(int X, int Y, int color) {
    posx = X;
    posy = Y;
   this-> color = color;
}
void CarUD::clearCharacter(int x, int y) {
    for (int i = 0; i < CAR_HEIGHT; i++) {
        for (int j = -1; j < CAR_WIDTH +1; j++) {
            xyputstr(x + j, y + i, "  ");
        }
    }
}

void CarUD::drawCharacter(int x, int y) {
    for (int i = 0; i < CAR_HEIGHT; i++) {
        for (int j = -1; j < CAR_WIDTH +1; j++) {
            textcolor(this->color);
            xyputstr(x + j, y + i, "бс");
        }
    }
}



void CarUD::Move(int key) {
    int oldx = posx;
    int oldy = posy;

    clearCharacter(oldx, oldy);

    switch (key) {
    case M_UPKEY:
        if (posy > 4) posy -= 4; break;
    case M_DOWNKEY:
        if (posy < 16) posy += 4; break;
    }

    drawCharacter(posx, posy);
}
/*
int CarUD::getX() {
    return posx;
}

void CarUD::setX(int x) {
    posx = x;
}

int CarUD::getY() {
    return posy;
}

void CarUD::setY(int y) {
    posy = y;
}
*/