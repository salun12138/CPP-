//
// Created by dell on 2024/6/3.
//
#include "sales.h"
#include <iostream>

using namespace SALES;
using std::cout;

int main(){
    double ary [4] = {1.5, 3.5, 5, 0};
    Sales sales1, sales2;
    setSales(sales1, ary, 5);
    setSales(sales2);
    cout << "sales1\n";
    showSales(sales1);
    cout << "sales2\n";
    showSales(sales2);
}