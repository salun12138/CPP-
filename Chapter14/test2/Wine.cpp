//
// Created by dell on 2024/7/9.
//

#include "Wine.h"

Wine::Wine(const char *l, int y, const int *yr, const int *bot) : string(l), PairArray(valarray<int> (yr,y), valarray<int> (bot,y)) {
}

Wine::Wine(const char *l, int y) : string(l), PairArray(valarray<int> (y),valarray<int> (y)){}

void Wine::GetBottles() {
    unsigned int nums = PairArray::first().size();
    cout << "Enter Gully Wash data for " << nums << " year(s):\n";
    for (int i = 0; i < nums; ++i) {
        cout << "Enter year:";
        cin >> PairArray::first()[i];
        cout << "Enter bottles for that year:";
        cin >> PairArray::second()[i];
    }
}

string &Wine::Label()  {
    return (string &) *this;
}

int Wine::sum() const {
    return PairArray::second().sum();
}

void Wine::show() const {
    cout << "Wine: " << (string &) *this << '\n';
    cout << "\tYear    Bottles\n";
    for (int i = 0; i < PairArray::first().size(); ++i) {
        cout << '\t' << PairArray::first()[i] << "    " << PairArray::second()[i] << endl;
    }
}