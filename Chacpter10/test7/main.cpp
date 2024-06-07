//
// Created by dell on 2024/6/5.
//
#include "Plorg.h"


int main(){
    Plorg one;
    Plorg two {"Hello", 30};
    one.showPlorg();
    two.showPlorg();
    one.setCi(100);
    one.showPlorg();
}