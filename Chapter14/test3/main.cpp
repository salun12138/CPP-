//
// Created by dell on 2024/7/9.
//
#include "QueueTp.h"
#include "workermi.h"
#include <iostream>
#include <cstring>

const int SIZE = 5;

int main(){
    using namespace std;
    QueueTp<Worker> workers (SIZE);
    int ct;
    for ( ct = 0; ct < SIZE; ++ct) {
        char choice;
        cout << "Enter the employee category:\n"
             << "w: waiter  s: singer  "
             << "t: singing waiter  q: quit\n";
        cin >> choice;
        while (strchr("wstq", choice) == nullptr)
        {
            cout << "Please enter a w, s, t, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        cin.get();
        switch (choice) {
            case 'w':{
                Worker * w = new Waiter;
                w->Set();
                workers.enQueue(w);
                break;
            }
            case 's':{
                Worker * s = new Singer;
                s->Set();
                workers.enQueue(s);
                break;
            }
            case 't':{
                Worker * t = new SingingWaiter;
                t->Set();
                workers.enQueue(t);
                break;
            }
            default:
                break;
        }
    }
    cout << "\nHere is your staff:\n";
    int i;
    for (i = 0; i < ct; ++i) {
        cout << endl;
        Worker * temp = nullptr;
        if (workers.deQueue(temp))
            temp->Show();
        delete temp;
    }
    cout << "Bye.\n";
    return 0;
}