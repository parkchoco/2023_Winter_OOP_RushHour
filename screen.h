#pragma once





class Screen
{
    int select = 1;
    int choose = 0;
public:
    Screen();
    int MainMenu();
    void SelectMenu();
    //void Sound();
    int getkey() {
        int ch = _getch();
        if (ch != 0xe0)
            return ch;
        else {
            int ch2 = _getch();
            return (0xe000 | ch2);
        }
    }
};