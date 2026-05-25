#include "Loan.h"
#include <iostream>
#include <fstream>
#include <iomanip>

//Default constructor
Loan::Loan() : principalAmount(0), interestRate(0), loanLength(0), loanType("") {}

//Parameterized constructor
Loan::Loan(const float principal, const float rate, const int length, const std::string type) 
    : principalAmount(principal), interestRate(rate), loanLength(length), loanType(type) {}

//Getters
float Loan::getPrincipal() const {
    return principalAmount;
}

float Loan::getInterestRate() const {
    return interestRate;
}

int Loan::getLoanLength() const {
    return loanLength;
}

std::string Loan::getLoanType() const {
    return loanType;
}

//Setters
void Loan::setPrincipal(const float principal) {
    principalAmount = principal;
}

void Loan::setInterestRate(const float rate) {
    interestRate = rate;
}

void Loan::setLoanLength(const int length) {
    loanLength = length;
}   

void Loan::setLoanType(const std::string type) {
    loanType = type;
}

//Parent class
float Loan::monthlyPayment() const {
    return 0;
}

//Displays loan info. formatted
void Loan::displayLoan() const {
    std::cout << "Loan Overview\n";
    std::cout << "----------------------------------\n";

    std::cout << std::left << std::setw(18) << "Loan Type:"
              << std::right << std::setw(16) << loanType << "|\n";

    std::cout << std::left << std::setw(18) << "Principal:"
              << std::right << std::setw(16) << std::fixed << std::setprecision(0)
              << principalAmount << "|\n";

    std::cout << std::left << std::setw(18) << "Interest Rate:"
              << std::right << std::setw(15) << std::fixed << std::setprecision(2)
              << interestRate << "%|\n";

    std::cout << std::left << std::setw(18) << "Length in Years:"
              << std::right << std::setw(16) << loanLength << "|\n";

    std::cout << std::left << std::setw(18) << "Monthly Payment:"
              << std::right << std::setw(16) << std::fixed << std::setprecision(2)
              << monthlyPayment() << "|\n";
}


//Saving Loan info
void Loan::saveLoan() {
    std::ofstream outFile("data/loans.txt");

    if (outFile.is_open()) {
        outFile << principalAmount << " "
                << interestRate << " "
                << loanLength << "\n";
        outFile.close(); //Clean up, close file when done
    }
}

//This is the implementation file for the Loan class. It includes the default and parameterized constructors
// getters and setters for the class attributes, , the parent class that returns 0, a function that dispklays and saves Loan info