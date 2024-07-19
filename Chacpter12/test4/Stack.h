//
// Created by dell on 2024/6/18.
//

#ifndef CHACPTER12_STACK_H
#define CHACPTER12_STACK_H

typedef unsigned long Item;

class Stack {
private:
    enum {MAX = 10};
    Item * pitems;
    int size;
    int top;
public:
    Stack(int n = MAX);
    Stack(const Stack & st);
    ~Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);
    bool pop(Item & item);
    Stack & operator=(const Stack & st);
};


#endif //CHACPTER12_STACK_H
