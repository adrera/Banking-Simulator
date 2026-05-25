#include "AmortizedLoan.h"
#include <cmath>

//Default constructor
AmortizedLoan::AmortizedLoan() : Loan() {}

//Parameterized constructor, setting loan type
AmortizedLoan::AmortizedLoan(const float principal, const float rate, const int length)
    : Loan(principal, rate, length, "Amortized Loan") {}

//Overriden function, calculation function that uses amortized loan formula to calculate monthly payment
float AmortizedLoan::monthlyPayment() const {
    float P = getPrincipal();
    float R = (getInterestRate() / 100.0f) / 12.0f;
    int L = getLoanLength() * 12;

    float numerator = P * R * std::pow(1 + R, L);
    float denominator = std::pow(1 + R, L) - 1;

    return numerator / denominator;
}

//Thsi is the implementation file for the AmortizedLoan class, which inherits from the Loan class.
//It include constructors that sets the loan type to "Amortized Loan",
//and an overridden function to calculate the monthly payment for an amortized loan using the amortized loan formula.