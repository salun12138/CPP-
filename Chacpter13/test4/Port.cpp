//
// Created by dell on 2024/7/3.
//

#include "Port.h"
#include <cstring>

Port::Port(const char *br, const char *st, int b) {
    brand = new char [strlen(br) + 1];
    strcpy(brand, br);
    strcpy(style, st);
    bottles = b;
}

Port::Port(const Port &p) {
    brand = new char [strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style,p.style);
}

Port &Port::operator=(const Port &p) {
    if (this == & p)
        return *this;
    delete [] brand;
    brand = new char [strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style,p.style);
    return *this;
}

Port &Port::operator+=(int b) {
    bottles += b;
    return *this;
}

Port &Port::operator-=(int b) {
    bottles -= b;
    return *this;
}

void Port::Show() const {
    cout << "Brand: " << brand << '\n'
         << "Kind: " << style << '\n'
         << "Bottles: " << bottles << '\n';
}

ostream & operator<<(ostream & os, const Port & p){
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}

VintagePort::VintagePort() : Port(){
    nickname = nullptr;
    year = 0;
}

VintagePort::VintagePort(const char *br, int b, const char *nn, int y) : Port(br, "none", b){
    nickname = new char [strlen(nn) + 1];
    strcpy(nickname, nn);
    year = y;
}

VintagePort::VintagePort(const VintagePort &vp) : Port(vp){
    nickname = new char [strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}

VintagePort &VintagePort::operator=(const VintagePort &vp) {
    if (this == & vp)
        return *this;
    delete [] nickname;
    Port::operator=(vp);
    nickname = new char [strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
    return *this;
}

void VintagePort::Show() const {
    Port::Show();
    cout << "nickname: " << nickname << '\n'
         << "year: " << year << '\n';
}

ostream & operator<<(ostream & os, const VintagePort & vp){
    os << (const Port &) vp ;
    os << vp.nickname << ", " << vp.year;
}