//
// Created by dell on 2024/6/17.
//

#ifndef CHACPTER11_STONEWT_H
#define CHACPTER11_STONEWT_H
#include <iostream>

class Stonewt {
private:
    enum {STONE, POUND, FIXED, Lbs_per_stn = 14};
    double stone;
    double pds_left;
    double pounds;
    int status;
public:
    Stonewt();
    Stonewt(double lbs);
    Stonewt(double stn, double lbs);
    ~Stonewt();
    Stonewt operator+(Stonewt & st) const;
    Stonewt operator-(Stonewt & st) const;
    Stonewt operator*(Stonewt & st) const;

    friend std::ostream & operator<<(std::ostream & os, Stonewt & st);

};


#endif //CHACPTER11_STONEWT_H
