//
// Created by dell on 2024/6/5.
//

#include "Move.h"
#include <iostream>



Move::Move(double a, double b) {
    x = a;
    y = b;
}

void Move::showMove() const {
    std::cout << "x: " << x << " y: " << y <<std::endl;
}

Move Move::add(const Move &m) const {
    double temp_x = m.x + this->x;
    double temp_y = m.y + this->y;
    Move temp {temp_x,temp_y};
    return temp;
}

void Move::reset(double a, double b) {
    this->x = a;
    this->y = b;
}