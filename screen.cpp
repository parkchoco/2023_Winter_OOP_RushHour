#include <conio.h>
#include <iostream>
#include "Consola.h"
#include "screen.h"
#include "keycode.h"
using namespace std;

Screen::Screen() {

}

 int Screen::MainMenu() {
    cout << "\n\n\n\n";
    
    textcolor(GREEN);
    cout << "\t\t"; cout << "■■■    ■    ■  ■■■  ■    ■      ■    ■  ■■■  ■    ■ ■■■\n";
    cout << "\t\t"; cout << "■    ■  ■    ■ ■       ■    ■      ■    ■ ■    ■ ■    ■ ■    ■\n";
    cout << "\t\t"; cout << "■    ■  ■    ■ ■       ■    ■      ■    ■ ■    ■ ■    ■ ■    ■\n";
    cout << "\t\t"; cout << "■■■    ■    ■  ■■■  ■■■■      ■■■■ ■    ■ ■    ■ ■■■\n";
    cout << "\t\t"; cout << "■   ■   ■    ■       ■ ■    ■      ■    ■ ■    ■ ■    ■ ■   ■\n";
    cout << "\t\t"; cout << "■    ■  ■    ■       ■ ■    ■      ■    ■ ■    ■ ■    ■ ■    ■\n";
    cout << "\t\t"; cout << "■     ■   ■■    ■■■  ■    ■      ■    ■  ■■■    ■■   ■     ■\n\n\n\n";



    
    if (select == 1) {
        textcolor(BLUE);
        cout << "\n\n\t\t\t\t\t" << "매우 쉬움\t    ■\n";
        textcolor(WHITE);
        cout << "\n\n\t\t\t\t\t" << "쉬움\t\t   ■■\n";
        cout << "\n\n\t\t\t\t\t" << "보통\t\t  ■■■\n";
        cout << "\n\n\t\t\t\t\t" << "어려움\t\t ■■■■\n";
        cout << "\n\n\t\t\t\t\t" << "매우 어려움\t■■■■■\n";
    }
    else if (select == 2) {
        textcolor(WHITE);
        cout << "\n\n\t\t\t\t\t" << "매우 쉬움\t    ■\n";
        textcolor(BLUE);
        cout << "\n\n\t\t\t\t\t" << "쉬움\t\t   ■■\n";
        textcolor(WHITE);
        cout << "\n\n\t\t\t\t\t" << "보통\t\t  ■■■\n";
        cout << "\n\n\t\t\t\t\t" << "어려움\t\t ■■■■\n";
        cout << "\n\n\t\t\t\t\t" << "매우 어려움\t■■■■■\n";
    }
    else if (select == 3) {
        textcolor(WHITE);
        cout << "\n\n\t\t\t\t\t" << "매우 쉬움\t    ■\n";
        cout << "\n\n\t\t\t\t\t" << "쉬움\t\t   ■■\n";
        textcolor(BLUE);
        cout << "\n\n\t\t\t\t\t" << "보통\t\t  ■■■\n";
        textcolor(WHITE);
        cout << "\n\n\t\t\t\t\t" << "어려움\t\t ■■■■\n";
        cout << "\n\n\t\t\t\t\t" << "매우 어려움\t■■■■■\n";
    }
    else if (select == 4) {
        textcolor(WHITE);
        cout << "\n\n\t\t\t\t\t" << "매우 쉬움\t    ■\n";
        cout << "\n\n\t\t\t\t\t" << "쉬움\t\t   ■■\n";
        cout << "\n\n\t\t\t\t\t" << "보통\t\t  ■■■\n";
        textcolor(BLUE);
        cout << "\n\n\t\t\t\t\t" << "어려움\t\t ■■■■\n";
        textcolor(WHITE);
        cout << "\n\n\t\t\t\t\t" << "매우 어려움\t■■■■■\n";
    }
    else if (select == 5) {
        textcolor(WHITE);
        cout << "\n\n\t\t\t\t\t" << "매우 쉬움\t    ■\n";
        cout << "\n\n\t\t\t\t\t" << "쉬움\t\t   ■■\n";
        cout << "\n\n\t\t\t\t\t" << "보통\t\t  ■■■\n";
        cout << "\n\n\t\t\t\t\t" << "어려움\t\t ■■■■\n";
        textcolor(BLUE);
        cout << "\n\n\t\t\t\t\t" << "매우 어려움\t■■■■■\n";
        textcolor(WHITE);
    }

    if (choose == 1) {
        clrscr();
        return select;
    }
    else {
        SelectMenu();
        clrscr();
        return 0;
    }
}

 void Screen::SelectMenu() {
     int key;
     key = getkey();
     if (key == M_DOWNKEY) {
         if (select < 5)
             select += 1;
     }
     else if (key == M_UPKEY) {
         if (select > 1)
             select -= 1;
     }
     if (key == SPACE_KEY) {
         choose = 1;
     }
 }

