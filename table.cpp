
#include <conio.h>
#include <iostream>
#include "Consola.h"
#include "Table.h"
#include "keycode.h"
using namespace std;


Table::Table() {
    for (int i = 0; i < TABLE_Y; i++) {
        for (int j = 0; j < TABLE_X; j++) {
            table[i][j] = 0;
        }
    }

    for (int i = 0; i < TABLE_X; i++) {
        table[0][i] = 1;
        table[TABLE_Y - 1][i] = 1;
    }
    for (int i = 0; i < TABLE_Y - 1; i++) {
        table[i][0] = 1;
        table[i][TABLE_X - 1] = 1;
    }
    for (int i = 9; i < 13; i++) {
        table[i][25] = 0;
    }


}



void Table::drawTable() {
    clrscr();
    for (int i = 0; i < TABLE_Y; i++) {
        for (int j = 0; j < TABLE_X; j++) {
            textbackground(DARKGRAY);
            textcolor(WHITE);

            if (table[i][j] == 1)
                cout << "¢Ë";
            else
                cout << "  ";
        }
        cout << "\n";
    }
}

