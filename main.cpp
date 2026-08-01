#include <iostream>
#include "bank.h"
int main() {
    Bank b;
    b.deposit(200.0);
    std::cout << b.getBalance() << std::endl;
    return 0;
}