#include "Rule.h"
#include <iostream>
#include "Consola.h"
using namespace std;

Rule::Rule() {


}

void Rule::drawRule() {
	gotoxy(80, 2);
	textcolor(GREEN);
	textbackground(BLACK);
	cout << "¡á¡á¡á         ¡á     ¡á¡á¡á";
	gotoxy(80, 3);
	cout << "¡á  ¡á  ¡á  ¡á ¡á     ¡á";
	gotoxy(80, 4);
	cout << "¡á¡á    ¡á  ¡á ¡á     ¡á¡á¡á";
	gotoxy(80, 5);
	cout << "¡á  ¡á  ¡á  ¡á ¡á     ¡á";
	gotoxy(80, 6);
	cout << "¡á   ¡á  ¡á¡á  ¡á¡á¡á ¡á¡á¡á";

	textbackground(DARKGRAY);

	textcolor(BLUE);
	gotoxy(80, 8);
	cout << "¢Ã¢Ã";

	textcolor(BLACK);
	gotoxy(88, 8);
	cout << " press 1 to move ";



	textcolor(RED);
	gotoxy(81, 10);
	cout << "¡á";
	gotoxy(81, 11);
	cout << "¡á";
	textcolor(BLACK);
	gotoxy(88, 11);
	cout << " press 2 to move ";



	textcolor(GREEN);
	gotoxy(81, 13);
	cout << "¡á";
	gotoxy(81, 14);
	cout << "¡á";
	textcolor(BLACK);
	gotoxy(88, 14);
	cout << " press 3 to move ";


	textcolor(YELLOW);
	gotoxy(81, 16);
	cout << "¡á";
	gotoxy(81, 17);
	cout << "¡á";
	textcolor(BLACK);
	gotoxy(88, 17);
	cout << " press 4 to move ";
	textcolor(YELLOW);
	gotoxy(81, 18);
	cout << "¡á";

	//BUS2
	textcolor(CYAN);
	gotoxy(79, 20);
	cout << "¡á¡á¡á";
	textcolor(BLACK);
	gotoxy(88, 20);
	cout << " press 5 to move ";

	//CAR3
	textcolor(MAGENTA);
	gotoxy(80, 22);
	cout << "¡á¡á";
	textcolor(BLACK);
	gotoxy(88, 22);
	cout << " press 6 to move ";

	//BUS3
	textcolor(BROWN);
	gotoxy(79, 24);
	cout << "¡á¡á¡á";
	textcolor(BLACK);
	gotoxy(88, 24);
	cout << " press 7 to move ";

	//BUS4
	textcolor(LIGHTGRAY);
	gotoxy(81, 26);
	cout << "¡á";
	gotoxy(81, 27);
	cout << "¡á";
	textcolor(BLACK);
	gotoxy(88, 27);
	cout << " press 8 to move ";
	textcolor(LIGHTGRAY);
	gotoxy(81, 28);
	cout << "¡á";

	textcolor(DARKGRAY);
	gotoxy(51, 10);
	cout << "¡á¡á¡á¡á¡á¡á¡á¡á";
	gotoxy(51, 11);
	cout << "¡á¡á¡á¡á¡á¡á¡á¡á";
	gotoxy(51, 12);
	cout << "¡á¡á¡á¡á¡á¡á¡á¡á";
	gotoxy(51, 13);
	cout << "¡á¡á¡á¡á¡á¡á¡á¡á";


	textbackground(DARKGRAY);
	gotoxy(15, 28);
	cout << "                                                        ";
	gotoxy(15, 29);
	cout << "                                                        ";
	gotoxy(15, 30);
	cout << "                                                        ";
	gotoxy(15, 31);
	cout << "                                                        ";
	gotoxy(15, 32);
	cout << "                                                        ";
	gotoxy(15, 33);
	cout << "                                                        ";
	gotoxy(15, 34);
	cout << "                                                        ";

}

void Rule::AnswerVeryEasy() {
	textcolor(BLACK);
	gotoxy(15, 28);
	cout << "                                                        ";
	gotoxy(15, 29);
	cout << "                                                        ";
	gotoxy(15, 30);
	cout << "                                                        ";
	gotoxy(15, 31);
	cout << "                 4¹ø ¾Æ·¡ 3Ä­ ¡æ Å»Ãâ!!                 ";
	gotoxy(15, 32);
	cout << "                                                        ";
	gotoxy(15, 33);
	cout << "                                                        ";
	gotoxy(15, 34);
	cout << "                                                        ";
}

void Rule::AnswerEasy() {
	textcolor(BLACK);
	gotoxy(15, 28);
	cout << "                                                        ";
	gotoxy(15, 29);
	cout << "                                                        ";
	gotoxy(15, 30);
	cout << "                                                        ";
	gotoxy(15, 31);
	cout << "         3¹ø ¾Æ·¡ 1Ä­ ¡æ 4¹ø ¾Æ·¡ 3Ä­ ¡æ Å»Ãâ!!         ";
	gotoxy(15, 32);
	cout << "                                                        ";
	gotoxy(15, 33);
	cout << "                                                        ";
	gotoxy(15, 34);
	cout << "                                                        ";
}

void Rule::AnswerNormal() {
	textcolor(BLACK);
	gotoxy(15, 28);
	cout << "                                                        ";
	gotoxy(15, 29);
	cout << "                                                        ";
	gotoxy(15, 30);
	cout << "                                                        ";
	gotoxy(15, 31);
	cout << "        5¹ø ¿À¸¥ÂÊ 2Ä­ ¡æ 3¹ø ¾Æ·¡ 2Ä­ ¡æ Å»Ãâ!!        ";
	gotoxy(15, 32);
	cout << "                                                        ";
	gotoxy(15, 33);
	cout << "                                                        ";
	gotoxy(15, 34);
	cout << "                                                        ";
}

void Rule::AnswerHard() {
	textcolor(BLACK);
	gotoxy(15, 28);
	cout << "                                                        ";
	gotoxy(15, 29);
	cout << "                                                        ";
	gotoxy(15, 30);
	cout << "       8¹ø ¾Æ·¡ 3Ä­ ¡æ 1¹ø ¿ÞÂÊ 1Ä­ ¡æ 2¹ø À§ 3Ä­       ";
	gotoxy(15, 31);
	cout << "      1¹ø ¿À¸¥ÂÊ 1Ä­ ¡æ 8¹ø À§ 3Ä­ ¡æ 7¹ø ¿ÞÂÊ 3Ä­      ";
	gotoxy(15, 32);
	cout << "         5¹ø ¿ÞÂÊ 3Ä­ ¡æ 4¹ø ¾Æ·¡ 3Ä­ ¡æ Å»Ãâ!!         ";
	gotoxy(15, 33);
	cout << "                                                        ";
	gotoxy(15, 34);
	cout << "                                                        ";
}

void Rule::AnswerVeryHard() {
	textcolor(BLACK);
	gotoxy(15, 27);
	cout << "                                                        ";
	gotoxy(15, 28);
	cout << "      6¹ø ¿À¸¥ÂÊ 2Ä­ ¡æ 4¹ø À§ 1Ä­ ¡æ 7¹ø ¿ÞÂÊ 3Ä­      ";
	gotoxy(15, 29);
	cout << "     3¹ø À§ 3Ä­ ¡æ 5¹ø ¿À¸¥ÂÊ 3Ä­ ¡æ 7¹ø ¿À¸¥ÂÊ 3Ä­     ";
	gotoxy(15, 30);
	cout << "     4¹ø ¾Æ·¡ 3Ä­ ¡æ 1¹ø ¿À¸¥ÂÊ 2Ä­ ¡æ 2¹ø ¾Æ·¡ 1Ä­     ";
	gotoxy(15, 31);
	cout << "      6¹ø ¿ÞÂÊ 3Ä­ ¡æ 3¹ø À§ 1Ä­ ¡æ 1¹ø ¿À¸¥ÂÊ 1Ä­      ";
	gotoxy(15, 32);
	cout << "       4¹ø À§ 3Ä­ ¡æ 5¹ø ¿ÞÂÊ 3Ä­ ¡æ 7¹ø ¿ÞÂÊ 3Ä­       ";
	gotoxy(15, 33);
	cout << "                  8¹ø ¾Æ·¡ 3Ä­ ¡æ Å»Ãâ                  ";
	gotoxy(15, 34);
	cout << "                                                        ";
}

void Rule::Hide() {
	textbackground(DARKGRAY);
	gotoxy(15, 28);
	cout << "                                                        ";
	gotoxy(15, 29);
	cout << "                                                        ";
	gotoxy(15, 30);
	cout << "                                                        ";
	gotoxy(15, 31);
	cout << "                                                        ";
	gotoxy(15, 32);
	cout << "                                                        ";
	gotoxy(15, 33);
	cout << "                                                        ";
	gotoxy(15, 34);
	cout << "                                                        ";

}