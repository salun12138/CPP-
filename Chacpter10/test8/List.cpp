//
// Created by dell on 2024/6/5.
//

#include "List.h"
#include <iostream>

List::List() {
    items[0] = 0;
    begin = 0;
    end = 0;
}

bool List::isEmpty() const {
    return end == 0;
}

bool List::isFull() const {
    return end == MAX;
}

bool List::add(const int n) {
    if (this->isFull())
        return false;
    items[end++] = n;
    return true;
}

void List::visit(void (*pf)(item &)) {
    int start = begin;
    for (; start < end; ++start) {
        pf(items[start]);
    }
}
