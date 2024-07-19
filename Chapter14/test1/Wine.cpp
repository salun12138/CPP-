//
// Created by dell on 2024/7/9.
//

#include "Wine.h"


Wine::Wine(const char *l, int y, const int *yr, const int *bot) : name(l), pairArray(valarray<int> (yr,y), valarray<int> (bot,y)){}

Wine::Wine(const char *l, int y) : name(l), pairArray(valarray<int> (y),valarray<int> (y)){}

void Wine::GetBottles() {
    unsigned int nums = pairArray.first().size();
    cout << "Enter Gully Wash data for " << nums << " year(s):\n";
    for (int i = 0; i < nums; ++i) {
        cout << "Enter year:";
        cin >> pairArray.first()[i];
        cout << "Enter bottles for that year:";
        cin >> pairArray.second()[i];
    }
}

string &Wine::Label()  {
    return name;
}

int Wine::sum() const {
    return pairArray.second().sum();
}

void Wine::show() const {
    cout << "Wine: " << name << '\n';
    cout << "\tYear    Bottles\n";
    for (int i = 0; i < pairArray.first().size(); ++i) {
        cout << '\t' << pairArray.first()[i] << "    " << pairArray.second()[i] << endl;
    }
}
