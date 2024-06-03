//
// Created by dell on 2024/6/3.
//

#ifndef CHACPTER9_SALES_H
#define CHACPTER9_SALES_H
namespace SALES
{
    const int QUARTERS = 4;
    struct Sales{
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };

    void setSales(Sales & s, const double ary[], int n);

    void setSales(Sales & s);

    void showSales(const Sales & s);
}
#endif //CHACPTER9_SALES_H
