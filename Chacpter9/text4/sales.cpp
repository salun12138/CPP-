//
// Created by dell on 2024/6/3.
//
#include "sales.h"
#include <iostream>

namespace SALES{
    using namespace std;

    void setSales(Sales & s, const double ary[], int n){
        if (n > 4)
            n = 4;
        int i = 0;
        double count = 0;
        s.max = ary[0];
        s.min = ary[0];
        for (; i < n; ++i) {
            s.sales[i] = ary[i];
            if (ary[i] > s.max)
                s.max = ary[i];
            if (ary[i] < s.min)
                s.min = ary[i];
            count += ary[i];
        }
        s.average = count / i;
        for (; i < 4; ++i) {
            s.sales[i] = 0;
        }
    }

    void setSales(Sales & s){
        cout << "Please input 4 numbers" << endl;
        double count = 0;
        for (double & sale : s.sales) {
            cin >> sale;
        }
        s.min = s.sales[0];
        s.max = s.sales[0];
        for (double sale : s.sales) {
            if (s.min > sale)
                s.min = sale;
            if (s.max < sale)
                s.max = sale;
            count += sale;
        }
        s.average = count / 4;
    }

    void showSales(const Sales & s){
        cout << "sales[]:";
        for (double sale: s.sales) {
            cout << sale << " ";
        }
        cout << "\n" << "average: " << s.average << " max: "
             << s.max << " min: " << s.min << endl;
    }
}

