#ifndef LOAN_H
#define LOAN_H

#include <string>

class Loan {
private:
    float principalAmount;
    float interestRate;
    int loanLength;
    std::string loanType;

public:
    // Default constructor
    Loan();

    // Parameterized constructor
    Loan(const float principal, const float rate, const int length, const std::string type);

    //Getters
    float getPrincipal() const;
    float getInterestRate() const;
    int getLoanLength() const;
    std::string getLoanType() const;

    //Setters
    void setPrincipal(const float principal);
    void setInterestRate(const float rate);
    void setLoanLength(const int length);
    void setLoanType(const std::string type);

    //Pure virtual function that calculates monthly payment
    virtual float monthlyPayment() const = 0;

    //Displays loan info. formatted
    void displayLoan() const;

    //Saving loan info
    void saveLoan();

};

#endif // LOAN_H

//This header file definess the Loan class, cosntructors, getting info from the loan,
//setting info for the loan, a pure virtual function to calculate monthly payment, 
//a function to display loan info, and a function to save loan info.