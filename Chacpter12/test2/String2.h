//
// Created by dell on 2024/6/18.
//

#ifndef CHACPTER12_String22_H
#define CHACPTER12_String22_H
#include <iostream>
#include <cstring>
using std::ostream;
using std::istream;


class String2 {
private:
    char * str;             // pointer to String2
    int len;                // length of String2
    static int num_strings; // number of objects
    static const int CINLIM = 80;  // cin input limit
public:
// constructors and other methods
    String2(const char * s); // constructor
    String2();               // default constructor
    String2(const String2 &); // copy constructor
    ~String2();              // destructor
    int length () const { return len; }
    void Stringlow();
    void String();
    int Count(char c) const;
// overloaded operator methods    
    String2 & operator=(const String2 &);
    String2 & operator=(const char *);
    char & operator[](int i);
    const char & operator[](int i) const;
// overloaded operator friends
    friend bool operator<(const String2 &st, const String2 &st2);
    friend bool operator>(const String2 &st1, const String2 &st2);
    friend bool operator==(const String2 &st, const String2 &st2);
    friend String2 operator+(const String2 &str1, const String2 &str2);
    friend ostream & operator<<(ostream & os, const String2 & st);
    friend istream & operator>>(istream & is, String2 & st);
// static function
    static int HowMany();
};


#endif //CHACPTER12_String22_H
