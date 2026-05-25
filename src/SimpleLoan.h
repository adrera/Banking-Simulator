#ifndef SIMPLELOAN_H
#define SIMPLELOAN_H

#include "Loan.h"

//Child class
class SimpleLoan : public Loan {
public:
    //Default constructor
    SimpleLoan();

    //Parameterized constructor
    SimpleLoan(const float principal, const float rate, const int length);

    //Overridden function to calculate monthly payment for a simple loan
    float monthlyPayment() const override;
};

#endif // SIMPLELOAN_H

//This header file defines the SimpleLoan class, which inherits from the Loan class. 
//It includes a default constructor, a parameterized constructor, 
//and an overridden function to calculate the monthly payment for a simple loan.