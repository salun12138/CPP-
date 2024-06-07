#include <iostream>
#include "bank.h"

int main() {
    Bank bank = Bank();
    bank.Show();
    bank.setSave(1000);
    bank.getSave(341);
    bank.Show();
    return 0;
}
