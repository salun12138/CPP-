//
// Created by dell on 2024/6/28.
//

#include "classic.h"
#include <cstring>
#include <iostream>


Cd::Cd(char *s1, char *s2, int n, double x) {
    performers = new char [strlen(s1) + 1];
    strcpy(performers, s1);
    label = new char [strlen(s2) + 1];
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &d) {
    performers = new char [strlen(d.performers) + 1];
    strcpy(performers, d.performers);
    label = new char [strlen(d.label) + 1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd(){
    performers = nullptr;
    label = nullptr;
    selections = 0;
    playtime = 0;
}

Cd::~Cd() noexcept {
    delete [] performers;
    delete [] label;
}

void Cd::Report() const {
    std::cout << "performers: " << performers << ", label"
              << label << ", selections: " << selections
              << ", playtime: " << playtime << std::endl;
}

Cd &Cd::operator=(const Cd &d) {
    if (this == &d)
        return *this;
    performers = new char [strlen(d.performers) + 1];
    strcpy(performers, d.performers);
    label = new char [strlen(d.label) + 1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic(char * c, char *s1, char *s2, int n, double x) : Cd(s1, s2, n, x){
    classic = new char [strlen(c) + 1];
    strcpy(classic, c);
}

Classic::Classic(const Classic &c): Cd(c) {
    classic = new char [strlen(c.classic) + 1];
    strcpy(classic,c.classic);
}

Classic::Classic(): Cd() {
    classic = nullptr;
}

Classic::~Classic() noexcept {
    delete [] classic;
}

void Classic::Report() const  {
    Cd::Report();
    std::cout << "classic: " << classic << std::endl;
}

Classic &Classic::operator=(const Classic &c) {
    if (this == & c)
        return *this;
    Cd::operator=(c);
    classic = new char [strlen(c.classic) + 1];
    strcpy(classic, c.classic);
    return *this;
}