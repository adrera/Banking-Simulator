#ifndef AMORTIZEDLOAN_H
#define AMORTIZEDLOAN_H

#include "Loan.h"

//Child class, inherits from Loan
class AmortizedLoan : public Loan {
public:
    //Default constructor
    AmortizedLoan();

    //Parameterized constructor
    AmortizedLoan(const float principal, const float rate, const int length);

    //Overridden function to calculate monthly payment for an amortized loan
    float monthlyPayment() const override;
};

#endif

//This header file defines the AmortizedLoan class, which inherits from the Loan class.
//It includes a default constructor, a parameterized constructor, and an overridden function to calculate the monthly payment for an amortized loan.