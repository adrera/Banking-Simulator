#include "SimpleLoan.h"

//Default constructor, calling parent class
SimpleLoan::SimpleLoan() : Loan() {}

//Parameterized constructor, setting loan type
SimpleLoan::SimpleLoan(const float principal, const float rate, const int length)
    : Loan(principal, rate, length, "Simple Loan") {}

//Caluculating monthly payment for simple loan formula
float SimpleLoan::monthlyPayment() const {
    float P = getPrincipal();
    float R = (getInterestRate() / 100.0f) / 12.0f;
    int L = getLoanLength() * 12;

    return (P * (R * L + 1)) / L;
}

//This is the implementation file for the SimpleLoan class, which inherits from the Loan class.
//A parameterized constructor that sets loan type, then using the override function from header
//Calculation function usings the simmple loan formula to calculate monthly payment