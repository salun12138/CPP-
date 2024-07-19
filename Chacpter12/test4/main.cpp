//
// Created by dell on 2024/6/18.
//

#include "Stack.h"
#include <iostream>

using namespace std;

int main()
{
    Stack stack1;
    Item item1;
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    {
        Stack stack2 = stack1;
        stack1.pop(item1);
        cout << item1 << endl;
        stack2.pop(item1);
        cout << item1 << endl;
    }
    Stack stack3;
    stack3 = stack1;
    stack3.push(4);
    stack3.pop(item1);
    cout << item1;

}