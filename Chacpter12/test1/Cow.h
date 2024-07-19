//
// Created by dell on 2024/6/18.
//

#ifndef CHACPTER12_COW_H
#define CHACPTER12_COW_H


class Cow {
private:
    char name[20] = {};
    char * hobby;
    double weight;
public:
    Cow();
    Cow(const char * nm, const char * ho, double wt);
    Cow(const Cow & c);
    ~Cow();
    Cow & operator=(const Cow & c);
    void ShowCow() const;
};


#endif //CHACPTER12_COW_H
