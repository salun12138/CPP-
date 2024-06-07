//
// Created by dell on 2024/6/5.
//

#ifndef CHACPTER10_PLORG_H
#define CHACPTER10_PLORG_H


class Plorg {
private:
    static const int MAX = 19;
    char name[MAX];
    int ci;
public:
    Plorg(const char * ch = "Plorga", int num = 50);
    void setCi(int num);
    void showPlorg() const;
};


#endif //CHACPTER10_PLORG_H
