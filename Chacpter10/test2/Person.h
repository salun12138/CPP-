//
// Created by dell on 2024/6/4.
//
#include <string>
#ifndef CHACPTER10_PERSON_H
#define CHACPTER10_PERSON_H
using namespace std;

class Person {
private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT]{};
public:
    Person() {lname = ""; fname[0] = '\0';};
    Person(const string & ln, const char * fn = "Heyyou");
    void Show() const;
    void FormalShow() const;
};


#endif //CHACPTER10_PERSON_H
