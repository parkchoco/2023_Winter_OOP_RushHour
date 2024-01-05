#pragma once

#include "CarRL.h"
#include "MainCharacter.h"
#include "BusUD.h"

bool isCollision(MainCharacter character, Bus bus) {
    // MainCharacter�� ��ġ�� ũ�⸦ �����ɴϴ�.
    int charX = character.getX();
    int charY = character.getY();

    // Car�� ��ġ�� ũ�⸦ �����ɴϴ�.
    int busX = bus.getX();
    int busY = bus.getY();


    // �浹 Ȯ�� �����Դϴ�.
    if (charX + 14 > busX) {
        if (charY + 4 <= busY) 
            return true;//�浹�Ѱ�
        return false;
    }

}
