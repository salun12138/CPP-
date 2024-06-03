//
// Created by dell on 2024/6/3.
//

#ifndef CHACPTER9_GOLF_H
#define CHACPTER9_GOLF_H
const int Len = 40;
struct golf {
    char fullname[Len];
    int handicap;
};
void SetGolf(golf & g, const char * name, int hc);
int SetGolf(golf & g);
void Handicap(golf & g, int hc);
void ShowGolf(const golf & g);
#endif //CHACPTER9_GOLF_H
