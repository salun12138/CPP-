//
// Created by dell on 2024/6/4.
//
#include <string>

#ifndef CHACPTER10_BANK_H
#define CHACPTER10_BANK_H
using namespace std;
class Bank{
private:
    string name;
    string account;
    double save;
public:
    Bank();
    void Show() const;
    void setSave(double money);
    void getSave(double money);
};
#endif //CHACPTER10_BANK_H
