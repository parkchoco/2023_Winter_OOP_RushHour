#include <conio.h>
#include <iostream>
#include "Consola.h"
#include "BusUD.h"
#include "keycode.h"

using namespace std;

void BusUD::xyputstr(int x, int y, const char* str) {
    gotoxy(x, y);
    cout << str;
}

BusUD::BusUD(int X, int Y, int color) {
    posx = X;
    posy = Y;
    this->color = color;
}
void BusUD::clearCharacter(int x, int y) {
    for (int i = 0; i < BUS_HEIGHT; i++) {
        for (int j = -1; j < BUS_WIDTH + 1; j++) {
            xyputstr(x + j, y + i, "  ");
        }
    }
}

void BusUD::drawCharacter(int x, int y) {
    for (int i = 0; i < BUS_HEIGHT; i++) {
        for (int j = -1; j < BUS_WIDTH + 1; j++) {
            textcolor(this->color);
            xyputstr(x + j, y + i, "бс");
        }
    }
}



void BusUD::Move(int key) {
    int oldx = posx;
    int oldy = posy;

    clearCharacter(oldx, oldy);

    switch (key) {
    case M_UPKEY:
        if (posy > 4) posy -= 4; break;
    case M_DOWNKEY:
        if (posy < 12) posy += 4; break;
    }

    drawCharacter(posx, posy);
}

/*
int BusUD::getX() {
    return posx;
}

void BusUD::setX(int x) {
    posx = x;
}

int BusUD::getY() {
    return posy;
}

void BusUD::setY(int y) {
    posy = y;
}
*/