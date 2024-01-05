#include "BusUD.h"
#include <conio.h>
#include <iostream>
#include "Consola.h"
#include "MainCharacter.h"
#include "keycode.h"
using namespace std;

void MainCharacter::xyputstr(int x, int y, const char* str) {
    gotoxy(x, y);
    cout << str;
}

MainCharacter::MainCharacter(int X, int Y, int color) {
    posx = X;
    posy = Y;
    this->color = color;
}

/*
int MainCharacter::getX() {
    return posx;
}

void MainCharacter::setX(int x) {
    posx = x;
}

int MainCharacter::getY() {
    return posy;
}

void MainCharacter::setY(int y) {
    posy = y;
}
*/

void MainCharacter::clearCharacter(int x, int y) {
    for (int i = 0; i < CHARACTER_HEIGHT; i++) {
        for (int j = 0; j < CHARACTER_WIDTH; j++) {
            xyputstr(x + j * 2, y + i, "  ");
        }
    }
}

void MainCharacter::drawCharacter(int x, int y) {
    for (int i = 0; i < CHARACTER_HEIGHT; i++) {
        for (int j = 0; j < CHARACTER_WIDTH; j++) {
            textcolor(this->color);
            xyputstr(x + j * 2, y + i, "▣");

        }
    }
}

void MainCharacter::Move(int key) {
    
    int oldx = posx;
    int oldy = posy;
    //int before=oldx;

    clearCharacter(oldx, oldy);

    switch (key) {
    case M_LEFTKEY:
        if (posx > 4) posx -= 8; break;
    case M_RIGHTKEY:
        if (posx < 48) posx += 8; break;
    }

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