#include <iostream>
#include <conio.h>
#include "Consola.h"
#include "screen.h"
#include "keycode.h"
#include "BusUD.h"
#include"MainCharacter.h"
#include "Table.h"
#include "CarUD.h"
#include "BusRL.h"
#include "CarRL.h"
#include "Rule.h"
using namespace std;

int getkey() {
	int ch = _getch();
	if (ch != 0xe0)
		return ch;
	else {
		int ch2 = _getch();
		return (0xe000 | ch2);
	}
}

int main(void) {

	int select = 0;

	_setcursortype(_NOCURSOR);
	system("mode con cols=110 lines=35 | title RUSH HOUR");
	//Game game;
	Screen screen;
	Table Table;
	Rule Rule;


	MainCharacter MainCharacter_LV1_2_3_5(3, 10, BLUE);
	MainCharacter MainCharacter_LV4(11, 10, BLUE);

	CarUD Car1_LV2(12, 14, RED);
	CarUD Car1_LV4(20, 14, RED);
	CarUD Car1_LV5(4, 2, RED);

	CarUD Car2_LV2(20, 10, GREEN);
	CarUD Car2_LV3(20, 6, GREEN);
	CarUD Car2_LV4(44, 18, GREEN);
	CarUD Car2_LV5(36, 18, GREEN);

	CarRL Car3_LV3(19, 2, MAGENTA);
	CarRL Car3_LV5(11, 2, MAGENTA);

	BusUD Bus1_LV1_2(36, 2, YELLOW);
	BusUD Bus1_LV4(28, 2, YELLOW);
	BusUD Bus1_LV5(20, 6, YELLOW);

	BusRL Bus2_LV3(11, 14, CYAN);
	BusRL Bus2_LV4(19, 22, CYAN);
	BusRL Bus2_LV5(3, 22, CYAN);

	BusRL Bus3_LV4_5(27, 14, BROWN);

	BusUD Bus4_LV4(4, 2, LIGHTGRAY);
	BusUD Bus4_LV5(44, 2, LIGHTGRAY);

	
	do {
		select = screen.MainMenu();
		if (select == 1) {
			int key;
			int selected = 0;
			int count = 0;
			Table.drawTable();
			Rule.drawRule();
			MainCharacter_LV1_2_3_5.drawCharacter(3, 10);
			Bus1_LV1_2.drawCharacter(36, 2);

			while (1) { 
				key = getkey();

				if (key == S_1_KEY) {
					selected = 1; 
				}
				else if (key == S_4_KEY) {
					selected = 4;
				}
				else if (key == S_0_KEY) {
					selected = 9;
					count++;
				}
				else if (key == SPACE_KEY) {
					return 0;
				}

				if (selected == 1) {
					MainCharacter_LV1_2_3_5.Move(key);
				}
				else if (selected == 4) {
					Bus1_LV1_2.Move(key);
				}
				else if (selected == 9) {
					if (count % 2 == 1)
						Rule.AnswerVeryEasy();
					else
						Rule.Hide();
				}

			}

		}
		else if (select == 2) {
			int key;
			int count = 0;
			int selected = 0; 
			Table.drawTable();
			Rule.drawRule();
			MainCharacter_LV1_2_3_5.drawCharacter(3, 10);
			Car1_LV2.drawCharacter(12, 14);
			Car2_LV2.drawCharacter(20, 10);
			Bus1_LV1_2.drawCharacter(36, 2);
			while (1) {
				key = getkey();

				if (key == S_1_KEY) {
					selected = 1;
				}
				else if (key == S_2_KEY) {
					selected = 2; 
				}
				else if (key == S_3_KEY) {
					selected = 3;
				}
				else if (key == S_4_KEY) {
					selected = 4;
				}
				else if (key == S_0_KEY) {
					selected = 9;
					count++;
				}
				else if (key == SPACE_KEY) {
					return 0;
				}

				if (selected == 1) {
					MainCharacter_LV1_2_3_5.Move(key);

				}
				else if (selected == 2) {
					Car1_LV2.Move(key);
				}
				else if (selected == 3) {
					Car2_LV2.Move(key);
				}
				else if (selected == 4) {
					Bus1_LV1_2.Move(key);
				}
				else if (selected == 9) {
					if (count % 2 == 1)
						Rule.AnswerEasy();
					else
						Rule.Hide();
				}

			}
		}
		else if (select == 3) {
			int key;
			int count = 0;
			int selected = 0;
			Table.drawTable();
			Rule.drawRule();
			MainCharacter_LV1_2_3_5.drawCharacter(3, 10);
			Bus2_LV3.drawCharacter(11, 14);
			Car2_LV3.drawCharacter(20, 6);
			Car3_LV3.drawCharacter(19, 2);
			while (1) {
				key = getkey();

				if (key == S_1_KEY) {
					selected = 1;
				}
				else if (key == S_3_KEY) {
					selected = 3;
				}
				else if (key == S_5_KEY) {
					selected = 5;
				}
				else if (key == S_6_KEY) {
					selected = 6;
				}
				else if (key == S_0_KEY) {
					selected = 9;
					count++;
				}
				else if (key == SPACE_KEY) {
					return 0;
				}

				if (selected == 1) {
					MainCharacter_LV1_2_3_5.Move(key);
				}
				else if (selected == 3) {
					Car2_LV3.Move(key);
				}
				else if (selected == 5) {
					Bus2_LV3.Move(key);
				}
				else if (selected == 6) {
					Car3_LV3.Move(key);
				}
				else if (selected == 9) {
					if (count % 2 == 1)
						Rule.AnswerNormal();
					else
						Rule.Hide();
				}
			}

		}
		else if (select == 4) {
			int key;
			int count = 0;
			int selected = 0;
			Table.drawTable();
			Rule.drawRule();
			MainCharacter_LV4.drawCharacter(11, 10);

			Car1_LV4.drawCharacter(20, 14); 
			Car2_LV4.drawCharacter(44, 18);

			Bus1_LV4.drawCharacter(28, 2);
			Bus2_LV4.drawCharacter(19, 22);
			Bus3_LV4_5.drawCharacter(27, 14);
			Bus4_LV4.drawCharacter(4, 2);


			while (1) {
				key = getkey();

				if (key == S_1_KEY) {
					selected = 1;
				}
				else if (key == S_2_KEY) {
					selected = 2;
				}
				else if (key == S_3_KEY) {
					selected = 3;
				}
				else if (key == S_4_KEY) {
					selected = 4;
				}
				else if (key == S_5_KEY) {
					selected = 5;
				}
				else if (key == S_7_KEY) {
					selected = 7;
				}
				else if (key == S_8_KEY) {
					selected = 8;
				}
				else if (key == S_0_KEY) {
					selected = 9;
					count++;
				}
				else if (key == SPACE_KEY) {
					return 0;
				}

				if (selected == 1) {
					MainCharacter_LV4.Move(key);
				}
				else if (selected == 2) {
					Car1_LV4.Move(key);
				}
				else if (selected == 3) {
					Car2_LV4.Move(key);
				}
				else if (selected == 4) {
					Bus1_LV4.Move(key);
				}
				else if (selected == 5) {
					Bus2_LV4.Move(key);
				}
				else if (selected == 7) {
					Bus3_LV4_5.Move(key);
				}
				else if (selected == 8) {
					Bus4_LV4.Move(key);
				}
				else if (selected == 9) {
					if (count % 2 == 1)
						Rule.AnswerHard();
					else
						Rule.Hide();
				}
			}
		}
		else if (select == 5) {
			int key;
			int count = 0;
			int selected = 0;
			Table.drawTable();
			Rule.drawRule();
			MainCharacter_LV1_2_3_5.drawCharacter(3, 10);

			Car1_LV5.drawCharacter(4, 2);
			Car2_LV5.drawCharacter(36, 18);
			Car3_LV5.drawCharacter(11, 2);

			Bus1_LV5.drawCharacter(20, 6);
			Bus2_LV5.drawCharacter(3, 22);
			Bus3_LV4_5.drawCharacter(27, 14);
			Bus4_LV5.drawCharacter(44, 2);


			while (1) {
				key = getkey();

				if (key == S_1_KEY) {
					selected = 1;
				}
				else if (key == S_2_KEY) {
					selected = 2;
				}
				else if (key == S_3_KEY) {
					selected = 3;
				}
				else if (key == S_4_KEY) {
					selected = 4;
				}
				else if (key == S_5_KEY) {
					selected = 5;
				}
				else if (key == S_6_KEY) {
					selected = 6;
				}
				else if (key == S_7_KEY) {
					selected = 7;
				}
				else if (key == S_8_KEY) {
					selected = 8;
				}
				else if (key == S_0_KEY) {
					selected = 9;
					count++;
				}
				else if (key == SPACE_KEY) {
					return 0;
				}

				if (selected == 1) {
					MainCharacter_LV1_2_3_5.Move(key);
				}
				else if (selected == 2) {
					Car1_LV5.Move(key);
				}
				else if (selected == 3) {
					Car2_LV5.Move(key);
				}
				else if (selected == 4) {
					Bus1_LV5.Move(key);
				}
				else if (selected == 5) {
					Bus2_LV5.Move(key);
				}
				else if (selected == 6) {
					Car3_LV5.Move(key);
				}
				else if (selected == 7) {
					Bus3_LV4_5.Move(key);
				}
				else if (selected == 8) {
					Bus4_LV5.Move(key);
				}
				else if (selected == 9) {
					if (count % 2 == 1)
						Rule.AnswerVeryHard();
					else
						Rule.Hide();
				}
			}
			}
	} while (select == 0);
	_getch();
	return 0;
}

