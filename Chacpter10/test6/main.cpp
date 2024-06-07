//
// Created by dell on 2024/6/5.
//
#include "Move.h"
#include <iostream>

int main(){
    Move one = Move(10, 10);
    Move two = Move(20, 20);
    one.showMove();
    two.showMove();
    Move three = one.add(two);
    three.showMove();
    three.reset();
    three.showMove();
}