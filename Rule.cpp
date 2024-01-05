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
	cout << "����         ��     ����";
	gotoxy(80, 3);
	cout << "��  ��  ��  �� ��     ��";
	gotoxy(80, 4);
	cout << "���    ��  �� ��     ����";
	gotoxy(80, 5);
	cout << "��  ��  ��  �� ��     ��";
	gotoxy(80, 6);
	cout << "��   ��  ���  ���� ����";

	textbackground(DARKGRAY);

	textcolor(BLUE);
	gotoxy(80, 8);
	cout << "�â�";

	textcolor(BLACK);
	gotoxy(88, 8);
	cout << " press 1 to move ";



	textcolor(RED);
	gotoxy(81, 10);
	cout << "��";
	gotoxy(81, 11);
	cout << "��";
	textcolor(BLACK);
	gotoxy(88, 11);
	cout << " press 2 to move ";



	textcolor(GREEN);
	gotoxy(81, 13);
	cout << "��";
	gotoxy(81, 14);
	cout << "��";
	textcolor(BLACK);
	gotoxy(88, 14);
	cout << " press 3 to move ";


	textcolor(YELLOW);
	gotoxy(81, 16);
	cout << "��";
	gotoxy(81, 17);
	cout << "��";
	textcolor(BLACK);
	gotoxy(88, 17);
	cout << " press 4 to move ";
	textcolor(YELLOW);
	gotoxy(81, 18);
	cout << "��";

	//BUS2
	textcolor(CYAN);
	gotoxy(79, 20);
	cout << "����";
	textcolor(BLACK);
	gotoxy(88, 20);
	cout << " press 5 to move ";

	//CAR3
	textcolor(MAGENTA);
	gotoxy(80, 22);
	cout << "���";
	textcolor(BLACK);
	gotoxy(88, 22);
	cout << " press 6 to move ";

	//BUS3
	textcolor(BROWN);
	gotoxy(79, 24);
	cout << "����";
	textcolor(BLACK);
	gotoxy(88, 24);
	cout << " press 7 to move ";

	//BUS4
	textcolor(LIGHTGRAY);
	gotoxy(81, 26);
	cout << "��";
	gotoxy(81, 27);
	cout << "��";
	textcolor(BLACK);
	gotoxy(88, 27);
	cout << " press 8 to move ";
	textcolor(LIGHTGRAY);
	gotoxy(81, 28);
	cout << "��";

	textcolor(DARKGRAY);
	gotoxy(51, 10);
	cout << "���������";
	gotoxy(51, 11);
	cout << "���������";
	gotoxy(51, 12);
	cout << "���������";
	gotoxy(51, 13);
	cout << "���������";


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
	cout << "                 4�� �Ʒ� 3ĭ �� Ż��!!                 ";
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
	cout << "         3�� �Ʒ� 1ĭ �� 4�� �Ʒ� 3ĭ �� Ż��!!         ";
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
	cout << "        5�� ������ 2ĭ �� 3�� �Ʒ� 2ĭ �� Ż��!!        ";
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
	cout << "       8�� �Ʒ� 3ĭ �� 1�� ���� 1ĭ �� 2�� �� 3ĭ       ";
	gotoxy(15, 31);
	cout << "      1�� ������ 1ĭ �� 8�� �� 3ĭ �� 7�� ���� 3ĭ      ";
	gotoxy(15, 32);
	cout << "         5�� ���� 3ĭ �� 4�� �Ʒ� 3ĭ �� Ż��!!         ";
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
	cout << "      6�� ������ 2ĭ �� 4�� �� 1ĭ �� 7�� ���� 3ĭ      ";
	gotoxy(15, 29);
	cout << "     3�� �� 3ĭ �� 5�� ������ 3ĭ �� 7�� ������ 3ĭ     ";
	gotoxy(15, 30);
	cout << "     4�� �Ʒ� 3ĭ �� 1�� ������ 2ĭ �� 2�� �Ʒ� 1ĭ     ";
	gotoxy(15, 31);
	cout << "      6�� ���� 3ĭ �� 3�� �� 1ĭ �� 1�� ������ 1ĭ      ";
	gotoxy(15, 32);
	cout << "       4�� �� 3ĭ �� 5�� ���� 3ĭ �� 7�� ���� 3ĭ       ";
	gotoxy(15, 33);
	cout << "                  8�� �Ʒ� 3ĭ �� Ż��                  ";
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