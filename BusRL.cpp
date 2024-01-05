#include "BusRL.h"
#include <conio.h>
#include <iostream>
#include "Consola.h"
#include "keycode.h"

using namespace std;

void BusRL::xyputstr(int x, int y, const char* str) {
    gotoxy(x, y);
    cout << str;
}


BusRL::BusRL(int X, int Y, int color) {
    posx = X;
    posy = Y;
    this->color = color;
}

void BusRL::clearCharacter(int x, int y) {
    for (int i = 0; i < BUS_HEIGHT; i++) {
        for (int j = 0; j < BUS_WIDTH; j++) {
            xyputstr(x + j * 2, y + i, "  ");
        }
    }
}

void BusRL::drawCharacter(int x, int y) {
    for (int i = 0; i < BUS_HEIGHT; i++) {
        for (int j = 0; j < BUS_WIDTH; j++) {
            textcolor(this->color);
            xyputstr(x + j * 2, y + i, "бс");

        }
    }
}




void BusRL::Move(int key) {
    int oldx = posx;
    int oldy = posy;

    clearCharacter(oldx, oldy);

    switch (key) {
    case M_LEFTKEY:
        if (posx > 4) posx -= 8; break;
    case M_RIGHTKEY:
        if (posx < 24) posx += 8; break;
    }

    drawCharacter(posx, posy);
}
/*
int BusRL::getX() {
    return posx;
}

void BusRL::setX(int x) {
    posx = x;
}

int BusRL::getY() {
    return posy;
}

void BusRL::setY(int y) {
    posy = y;
}
*/