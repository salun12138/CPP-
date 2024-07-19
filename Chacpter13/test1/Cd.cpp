//
// Created by dell on 2024/6/21.
//

#include "Cd.h"
#include <cstring>
#include <iostream>


Cd::Cd(char *s1, char *s2, int n, double x) {
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &d) {
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd() : performers {}, label {}{
    selections = 0;
    playtime = 0;
}

Cd::~Cd() noexcept {

}

void Cd::Report() const {
    std::cout << "performers: " << performers << ", label"
              << label << ", selections: " << selections
              << ", playtime: " << playtime << std::endl;
}

Cd &Cd::operator=(const Cd &d) {
    if (this == &d)
        return *this;
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic(char * c, char *s1, char *s2, int n, double x) : Cd(s1, s2, n, x){
    strcpy(classic, c);
}

Classic::Classic(const Classic &c): Cd(c) {
    strcpy(classic,c.classic);
}

Classic::Classic(): Cd(), classic{} {}

Classic::~Classic() noexcept {

}

void Classic::Report() const  {
    Cd::Report();
    std::cout << "classic: " << classic << std::endl;
}

Classic &Classic::operator=(const Classic &c) {
    if (this == & c)
        return *this;
    Cd::operator=(c);
    strcpy(classic, c.classic);
    return *this;
}