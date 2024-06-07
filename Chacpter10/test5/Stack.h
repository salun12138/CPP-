//
// Created by dell on 2024/6/5.
//

#ifndef CHACPTER10_STACK_H
#define CHACPTER10_STACK_H

struct customer {
    char fullname[35] {};
    double payment{};
};

typedef customer Item;

class Stack {
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;
public:
    Stack();
    bool isEmpty() const;
    bool isFull() const;
    bool push(const Item & item);
    bool pop(Item & item);
};


#endif //CHACPTER10_STACK_H
