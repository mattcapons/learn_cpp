// funcPractice.cpp
// learning functions
// By Matteo Capone

#include <iostream>
using namespace std;

const double SALES_TAX = 0.075;

double computeTax(double subTotal);

int main() {
    double subTotal = 10;
    double total = subTotal + computeTax(subTotal);
    cout << total << endl;
}

double computeTax(double subTotal) {
    return subTotal * SALES_TAX;
}
