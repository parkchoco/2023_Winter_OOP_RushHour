#include "CarRL.h"
#include "BusUD.h"
#include <conio.h>
#include <iostream>
#include "Consola.h"
#include "keycode.h"
using namespace std;

void CarRL::xyputstr(int x, int y, const char* str) {
    gotoxy(x, y);
    cout << str;
}

CarRL::CarRL(int X, int Y, int color) {
    posx = X;
    posy = Y;
    this->color = color;
}
/*
int CarRL::getX() {
    return posx;
}

void CarRL::setX(int x) {
    posx = x;
}

int CarRL::getY() {
    return posy;
}

void CarRL::setY(int y) {
    posy = y;
}
*/
void CarRL::clearCharacter(int x, int y) {
    for (int i = 0; i < CAR_HEIGHT; i++) {
        for (int j = 0; j < CAR_WIDTH; j++) {
            xyputstr(x + j * 2, y + i, "  ");
        }
    }
}

void CarRL::drawCharacter(int x, int y) {
    for (int i = 0; i < CAR_HEIGHT; i++) {
        for (int j = 0; j < CAR_WIDTH; j++) {
            textcolor(this->color);
            xyputstr(x + j * 2, y + i, "■");

        }
    }
}



void CarRL::Move(int key) {

    int oldx = posx;
    int oldy = posy;
    //int before=oldx;


    clearCharacter(oldx, oldy);

    switch (key) {
    case M_LEFTKEY:
        if (posx > 4) posx -= 8; break;
    case M_RIGHTKEY:
        if (posx < 32) posx += 8; break;
    }



    //
    /*
    if (MainCharacter.isCollision() == 1) {
        posx = oldx;
    }
    else if (isCollision(character, bus) == 2) {
        posx = posx+8;
    }
    */


    drawCharacter(posx, posy);



}

/*
bool MainCharacter::isCollision(int x, int y) {
    posx = x;
    posy = y;




    if (charX + 14 > busX) {
        if (charY + 4 <= busY)
            return 2;//충돌한것
        return 1;
    }



}
*/