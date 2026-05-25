//Author: Ayatt Drera
//Date: April 2026
//PA7 - Loan Calculator
//This program defines a base class Loan, and two derived classes SimpleLoan and AmortizedLoan. 
//The program calculates monthly payments for both types of loans, displays loan information, and saves loan data to a file.
#include <iostream>
#include "SimpleLoan.h"
#include "AmortizedLoan.h"

int main() {
    // Test SimpleLoan
    SimpleLoan s1(15000, 8.5f, 3);
    std::cout << "SimpleLoan monthlyPayment: " << s1.monthlyPayment() << "\n";
    s1.displayLoan();
    s1.saveLoan();

    // Test AmortizedLoan
    AmortizedLoan a1(15000, 8.5f, 3);
    std::cout << "\nAmortizedLoan monthlyPayment: " << a1.monthlyPayment() << "\n";
    a1.displayLoan();
    a1.saveLoan();

    return 0;
}