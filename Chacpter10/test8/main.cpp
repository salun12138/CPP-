//
// Created by dell on 2024/6/5.
//
#include "List.h"
#include <iostream>

using namespace std;

void show(item &);

int main(){
    List list;
    cout << list.isEmpty() << endl;
    list.add(9);
    list.add(10);
    list.visit(show);
}

void show(item & item1){
    cout << item1 << endl;
}