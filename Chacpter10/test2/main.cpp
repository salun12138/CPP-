//
// Created by dell on 2024/6/4.
//
#include "Person.h"
#include <iostream>

int main(){
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    one.Show();
    one.FormalShow();
    two.Show();
    two.FormalShow();
    three.Show();
    three.FormalShow();
}