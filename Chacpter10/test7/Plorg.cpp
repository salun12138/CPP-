//
// Created by dell on 2024/6/5.
//

#include "Plorg.h"
#include <iostream>
#include <cstring>

using namespace std;
Plorg::Plorg(const char *ch, int num) {
    strcpy(name, ch);
    ci = num;
}

void Plorg::setCi(int num) {
    ci = num;
}

void Plorg::showPlorg() const {
    cout << "name: " << name << " ci: " << ci << endl;
}
