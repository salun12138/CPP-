//
// Created by dell on 2024/6/5.
//

#ifndef CHACPTER10_LIST_H
#define CHACPTER10_LIST_H

typedef int item;

class List {
private:
    static const int MAX = 10;
    item items[MAX];
    int end;
    int begin;
public:
    List();
    bool isEmpty() const;
    bool isFull() const;
    bool add(int n);
    void visit(void (*pf) (item &));

};


#endif //CHACPTER10_LIST_H
