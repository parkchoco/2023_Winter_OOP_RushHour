#pragma once
using namespace std;
#define TABLE_X 26
#define TABLE_Y 26


class Table {
private:
    int x;
    int y;
    int table[TABLE_Y][TABLE_X];
public:

    Table();
    void drawTable();


};
