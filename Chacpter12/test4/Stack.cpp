//
// Created by dell on 2024/6/18.
//

#include "Stack.h"
#include <iostream>

Stack::Stack(int n) {
    size = n;
    pitems = new Item [n];
    top = 0;
}

Stack::Stack(const Stack &st) {
    size = st.size;
    delete [] pitems;
    pitems = new Item [st.size];
    for (int i = 0; i < st.top; ++i) {
        pitems[i] = st.pitems[i];
    }
    top = st.top;
}

Stack::~Stack() {
    delete [] pitems;
    std::cout << "Done" << std::endl;
}

bool Stack::isempty() const {
    return top == 0;
}

bool Stack::isfull() const {
    return top == size;
}

bool Stack::push(const Item &item) {
    if (this->isfull())
        return false;
    pitems[top++] = item;
    return true;
}

bool Stack::pop(Item &item) {
    if (this->isempty())
        return false;
    item = pitems[--top];
    return true;
}

Stack &Stack::operator=(const Stack &st) {
    if (this == & st)
        return *this;
    size = st.size;
    delete [] pitems;
    pitems = new Item [st.size];
    for (int i = 0; i < st.top; ++i) {
        pitems[i] = st.pitems[i];
    }
    top = st.top;
    return *this;

}