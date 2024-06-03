//
// Created by dell on 2024/6/3.
//
#include <iostream>

using namespace std;

struct chaff
{
    char dross[20];
    int slag;
};


chaff ary[10];

int main()
{
    auto * pt = new (ary) chaff[2];
    for (int i = 0; i < 2; ++i) {
        cout << "input dross and slag:";
        cin.get(pt[i].dross, 20).get();
        cin >> pt[i].slag;
        cin.get();
    }
    for (int i = 0; i < 2; ++i) {
        cout << "dross: " << pt[i].dross << " " << "slag: " << pt[i].slag << endl;
    }
    return 0;
}