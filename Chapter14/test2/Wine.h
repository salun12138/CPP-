//
// Created by dell on 2024/7/9.
//

#ifndef CHAPTER14_WINE_H
#define CHAPTER14_WINE_H

#include <iostream>
#include <string>
#include <valarray>

using namespace std;

template <class T1, class T2>
class Pair
{
private:
    T1 a;
    T2 b;
public:
    T1 & first();
    T2 & second();
    T1 first() const { return a; }
    T2 second() const { return b; }
    Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) { }
    Pair() = default;
};

template<class T1, class T2>
T1 & Pair<T1,T2>::first()
{
    return a;
}
template<class T1, class T2>
T2 & Pair<T1,T2>::second()
{
    return b;
}

typedef valarray<int> ArrayInt;
typedef Pair<ArrayInt , ArrayInt > PairArray;

class Wine : private string , private PairArray {
public:
    Wine() = default;
    Wine(const char * l, int y, const int yr[], const int bot[]);
    Wine(const char * l, int y);
    void GetBottles();
    string & Label() ;
    int sum() const;
    void show() const;
};


#endif //CHAPTER14_WINE_H
