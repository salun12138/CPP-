//
// Created by dell on 2024/7/9.
//

#include "Person.h"
#include "cstring"

Person::Person(char *n, char *sn) {
    name = new char [strlen(n) + 1];
    strcpy(name,n);
    surname = new char [strlen(sn) + 1];
    strcpy(surname,sn);
}

Person::Person(const Person &p) {
    name = new char [strlen(p.name) + 1];
    strcpy(name,p.name);
    surname = new char [strlen(p.surname) + 1];
    strcpy(surname,p.surname);
}

Person::~Person() {
    delete [] name;
    delete [] surname;
}

void Person::Data() const {
    std::cout << "name: " << name << " surname: " << surname << std::endl;
}

void Person::Show() const {
    Data();
}

Person &Person::operator=(const Person &p) {
    if (this == &p)
        return *this;
    delete [] name;
    delete [] surname;
    name = new char [strlen(p.name) + 1];
    strcpy(name,p.name);
    surname = new char [strlen(p.surname) + 1];
    strcpy(surname,p.surname);
    return *this;
}

Gunslinger::Gunslinger(char *n, char *sn, double t, int num) : Person(n, sn) {
    time = t;
    number = num;
}

Gunslinger::Gunslinger(const Gunslinger &g) : Person(g){
    time = g.time;
    number = g.number;
}

double Gunslinger::Draw() const {
    return time;
}

void Gunslinger::Data() const {
    std::cout << "time: " << time << " number: " << number << std::endl;
}

void Gunslinger::Show() const {
    Person::Data();
    Data();
}

PokerPlayer::PokerPlayer(char *n, char *sn) : Person(n, sn){};

int PokerPlayer::Draw() const {
    std::random_device rd;
    std::mt19937 gen(rd());

    // 定义范围 [1, 52]
    std::uniform_int_distribution<> distrib(1, 52);

    // 生成随机数
    int card = distrib(gen);

    return card;
}

void PokerPlayer::Show() const {
    Person::Show();
}

BadDude::BadDude(char *n, char *sn, double t, int num) : Person(n, sn), Gunslinger(n, sn, t, num){};

double BadDude::Gdraw() const {
    return Gunslinger::Draw();
}

int BadDude::Cdraw() const{
    return PokerPlayer::Draw();
}

void BadDude::Show() const {
    PokerPlayer::Show();
    std::cout << "Cdraw " << Cdraw() << std::endl;
}

