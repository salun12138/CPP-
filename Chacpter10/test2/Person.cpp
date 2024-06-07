//
// Created by dell on 2024/6/4.
//
#include <iostream>
#include "Person.h"
#include <cstring>


Person::Person(const string &ln, const char *fn) {
    lname = ln;
    std::strcpy(fname, fn);
}

void Person::Show() const {
    cout << fname << " " << lname << endl;
}

void Person::FormalShow() const {
    cout << lname << " " << fname << endl;
}