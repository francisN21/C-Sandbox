#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
     // declaring requried variables
     float monthly_payment, s, denominator, numerator, i, k;
     int amount, years, n;
     float annual_percent;

     // asking user to enter borrowed amount
     cout << "Enter borrowed amount: ";
     // storing it in a variable
     cin >> amount;
     // asking user to enter annual interest rate
     cout << "Enter Annual interest rate: ";
     // reading it into a variable
     cin >> annual_percent;
     // asking user to enter payback period
     cout << "Enter Payback period: ";
     // reading it into a variable
     cin >> years;
     // to make easy of formula calculating the equation as parts
     i = annual_percent / 1200;
     n = (years * 12);
     s = 1 + (i);
     // calculating power value
     k = pow(s, n);
     numerator = k * amount * i;
     denominator = k - 1;
     // finally calculating the monthlyvpayment
     monthly_payment = numerator / denominator;
     // printing the formatted result
     cout << "Amount borrowed (programmer input) = ";
     cout << "$" << amount << endl;
     cout << "Annual interest rate (programmer input) = " << annual_percent << "%" << endl;
     cout << "Payback period (programmer input) = " << years << " Years" << endl;
     cout << "Monthly payment (Calculated output) = ";
     cout << "$" << fixed << setprecision(2) << monthly_payment << endl;
     return 0;
}