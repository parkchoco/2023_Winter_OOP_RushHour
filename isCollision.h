#pragma once

#include "CarRL.h"
#include "MainCharacter.h"
#include "BusUD.h"

bool isCollision(MainCharacter character, Bus bus) {
    // MainCharacter의 위치와 크기를 가져옵니다.
    int charX = character.getX();
    int charY = character.getY();

    // Car의 위치와 크기를 가져옵니다.
    int busX = bus.getX();
    int busY = bus.getY();


    // 충돌 확인 로직입니다.
    if (charX + 14 > busX) {
        if (charY + 4 <= busY) 
            return true;//충돌한것
        return false;
    }

}
