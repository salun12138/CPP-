//
// Created by dell on 2024/7/9.
//

#ifndef CHAPTER14_PERSON_H
#define CHAPTER14_PERSON_H
#include <iostream>
#include <random>

class Person {
private:
    char * name;
    char * surname;
protected:
    virtual void Data() const;
public:
    Person() : name(nullptr), surname(nullptr){};
    Person(char * n, char * sn);
    Person(const Person & p);
    virtual ~Person();
    virtual void Show() const;
    Person & operator=(const Person & p);
};

class Gunslinger : public virtual Person {
private:
    double time;
    int number;
protected:
    void Data() const override;
public:
    Gunslinger() : time(0), number(0), Person() {};
    Gunslinger(char * n, char * sn, double t, int num);
    Gunslinger(const Gunslinger & g);
    double Draw() const;
    ~Gunslinger() override = default;
    void Show() const override;
};

class PokerPlayer : public virtual Person {
public:
    PokerPlayer() : Person() {};
    PokerPlayer(char * n, char * sn);
    int Draw() const;
    ~PokerPlayer() override = default;
    void Show() const override;
};

class BadDude : public Gunslinger, public PokerPlayer {
public:
    BadDude() : Person(), Gunslinger(), PokerPlayer() {};
    BadDude(char * n, char * sn, double t, int num);
    ~BadDude() override = default;
    double Gdraw() const;
    int Cdraw() const;
    void Show() const override;
};
#endif //CHAPTER14_PERSON_H
