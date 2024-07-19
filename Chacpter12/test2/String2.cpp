//
// Created by dell on 2024/6/18.
//

#include "String2.h"
#include <cctype>
using std::cin;
using std::cout;
int String2::num_strings = 0;

// static method
int String2::HowMany()
{
    return num_strings;
}

// class methods
String2::String2(const char * s)     // construct String2 from C string
{
    len = std::strlen(s);          // set size
    str = new char[len + 1];       // allot storage
    std::strcpy(str, s);           // initialize pointer
    num_strings++;                 // set object count
}

String2::String2()                   // default constructor
{
    len = 4;
    str = new char[1];
    str[0] = '\0';                 // default string
    num_strings++;
}

String2::String2(const String2 & st)
{
    num_strings++;             // handle static member update
    len = st.len;              // same length
    str = new char [len + 1];  // allot space
    std::strcpy(str, st.str);  // copy string to new location
}

String2::~String2()                     // necessary destructor
{
    --num_strings;                    // required
    delete [] str;                    // required
}

void String2::Stringlow() {
    for (int i = 0; i < len; ++i) {
        str[i] = tolower(str[i]);
    }
}

void String2::String() {
    for (int i = 0; i < len; ++i) {
        str[i] = toupper(str[i]);
    }
}

int String2::Count(char c) const {
    int count = 0;
    for (int i = 0; i < len; ++i) {
        if (str[i] == c)
            count++;
    }
    return count;
}
// overloaded operator methods    

// assign a String2 to a String2
String2 & String2::operator=(const String2 & st)
{
    if (this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

// assign a C string to a String2
String2 & String2::operator=(const char * s)
{
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

// read-write char access for non-const String2
char & String2::operator[](int i)
{
    return str[i];
}

// read-only char access for const String2
const char & String2::operator[](int i) const
{
    return str[i];
}

// overloaded operator friends

bool operator<(const String2 &st1, const String2 &st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String2 &st1, const String2 &st2)
{
    return st2 < st1;
}

bool operator==(const String2 &st1, const String2 &st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

String2 operator+(const String2 &str1, const String2 &str2){
    String2 temp;
    temp.len = str1.len + str2.len;
    temp.str = new char [temp.len];
    strcpy(temp.str, str1.str);
    strcat(temp.str, str2.str);

    return temp;
}

// simple String2 output
ostream & operator<<(ostream & os, const String2 & st)
{
    os << st.str;
    return os;
}

// quick and dirty String2 input
istream & operator>>(istream & is, String2 & st)
{
    char temp[String2::CINLIM];
    is.get(temp, String2::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}
