//
// Created by dell on 2024/6/3.
//
#include "golf.h"
#include <iostream>
#include <cstring>

void SetGolf(golf & g, const char * name, int hc){
    strcpy(g.fullname, name);
    Handicap(g, hc);
}

int SetGolf(golf & g){
    using namespace std;
    cout << "Please input name:";
    char name[Len];
    cin.get(name, Len).get();
    if (strlen(name) == 0)
        return 0;
    else
        strcpy(g.fullname, name);
    cout << "Please input handicap:";
    cin >> g.handicap;
    cin.get();
    return 1;
}
void Handicap(golf & g, int hc){
    g.handicap = hc;
}
void ShowGolf(const golf & g){
    using namespace std;
    cout << "Fullname: " << g.fullname << " " << "handicap: " << g.handicap << endl;
}
