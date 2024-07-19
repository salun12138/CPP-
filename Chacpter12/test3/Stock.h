//
// Created by dell on 2024/6/18.
//

#ifndef CHACPTER12_STOCK_H
#define CHACPTER12_STOCK_H
#include <ostream>

class Stock {
private:
    char * company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    Stock();        // default constructor
    Stock(const char * co, long n = 0, double pr = 0.0);
    ~Stock();       // do-nothing destructor
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    const Stock & topval(const Stock & s) const;

    friend std::ostream & operator<<(std::ostream & os, const Stock & stock);
};


#endif //CHACPTER12_STOCK_H
