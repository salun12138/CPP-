//
// Created by dell on 2024/6/18.
//

#include "Cow.h"
#include <iostream>
#include <cstring>

Cow::Cow() {
    hobby = nullptr;
    weight = 0;
}

Cow::Cow(const char *nm, const char *ho, double wt) {
    strcpy(name, nm);
    hobby = new char[strlen(ho) + 1];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow &c) {
    strcpy(name, c.name);
    hobby = new char [strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow() {
    delete [] hobby;
    weight = 0;
    std::cout << "Done\n";
}

Cow &Cow::operator=(const Cow &c) {
    if (this == &c)
        return *this;
    strcpy(name, c.name);
    delete [] hobby;
    hobby = new char [strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}

void Cow::ShowCow() const {
    std::cout << "name: " << name << ", hobby: " << hobby
                << ", weight: " << weight << std::endl;
}