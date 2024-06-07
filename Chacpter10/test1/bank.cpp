//
// Created by dell on 2024/6/4.
//
#include "bank.h"
#include <iostream>

Bank::Bank() {
    name = "error";
    account = "null";
    save = 0;
}

void Bank::Show() const {
    cout << "The account information is:\n";
    cout << "name: " << name << " account: " << account << " save: " << save << endl;
}

void Bank::setSave(double money) {
    save += money;
}

void Bank::getSave(double money) {
    if (save >= money)
        save -= money;
}