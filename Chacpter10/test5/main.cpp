//
// Created by dell on 2024/6/5.
//
#include "Stack.h"
#include <iostream>

int main(){
    double count = 0;
    Item ary[5] = {{"hello",20.6}, {"ok",13.5},
                   {"right",38.1}, {"dfoiasdf",45.8},
                   {"jdfwoewieq",0.3}};
    Stack stack;
    stack.push(ary[0]);
    int i = 1;
    while (!stack.isEmpty() && !stack.isFull() && i < 5){
        Item temp;
        stack.pop(temp);
        count += temp.payment;
        std::cout << "total: " << count << std::endl;
        stack.push(ary[i++]);
    }
}