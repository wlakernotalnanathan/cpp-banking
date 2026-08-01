#include "bank.h"
Bank::Bank() : balance(0) {}
void Bank::deposit(double val) { balance += val; }
double Bank::getBalance() { return balance; }