#include <iostream>
#include <iomanip>  // For controlling the output formatting
#include <cmath> // Add this line to include the <cmath> header

int main() {
    // Declare variables for the principal, interest rate, number of times compounded, and results
    double principal, rate, interest, amount;
    int timesCompounded;

    // Ask the user for the principal
    std::cout << "Enter the principal (initial investment): $";
    std::cin >> principal;

    // Ask the user for the annual interest rate (in percentage)
    std::cout << "Enter the annual interest rate (as a percentage, e.g., 4.25 for 4.25%): ";
    std::cin >> rate;

    // Ask the user for the number of times the interest is compounded per year (e.g., 12 for monthly)
    std::cout << "Enter the number of times the interest is compounded per year: ";
    std::cin >> timesCompounded;

    // Convert the interest rate from percentage to decimal (e.g., 4.25% becomes 0.0425)
    rate = rate / 100;

    // Calculate the total amount in the account after one year using the compound interest formula
    amount = principal * std::pow (1 + rate / timesCompounded, timesCompounded);

    // Calculate the interest earned by subtracting the principal from the total amount
    interest = amount - principal;

    // Display the results in a clear and simple format, with 2 decimal places
    std::cout << std::fixed << std::setprecision(2);  // This will ensure the output has two decimal places

    // Output the results
    std::cout << "\nInterest Rate: " << rate * 100 << "%" << std::endl;
    std::cout << "Times Compounded: " << timesCompounded << " times per year" << std::endl;
    std::cout << "Principal (Initial Investment): $" << principal << std::endl;
    std::cout << "Interest Earned: $" << interest << std::endl;
    std::cout << "Amount in Savings after one year: $" << amount << std::endl;

    return 0;
}


