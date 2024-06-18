//
// Created by dell on 2024/6/17.
//

#include "Stonewt.h"
#include <iostream>

Stonewt::Stonewt() {
    stone = pds_left = pounds = 0;
}

Stonewt::Stonewt(double lbs) {
    stone = lbs / Lbs_per_stn;
    pds_left = int (lbs) % Lbs_per_stn + lbs - int (lbs);
    pounds = lbs;
}

Stonewt::Stonewt(double stn, double lbs) {
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::~Stonewt(){

}

Stonewt Stonewt::operator+(Stonewt &st) const {
    Stonewt stonewt;
    stonewt.stone = stone + st.stone;
    stonewt.pds_left = pds_left + st.pds_left;
    stonewt.pounds = pounds + st.pounds;
    return stonewt;
}

Stonewt Stonewt::operator-(Stonewt &st) const {

}

Stonewt Stonewt::operator*(Stonewt &st) const {

}

std::ostream & operator<<(std::ostream & os, Stonewt & st){

}



