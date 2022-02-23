#include <iomanip>
#include <iostream>
using namespace std;

#include <cmath>

int main()
{
    // input values
    int years = 100;
    int D = 100;

    // output (calculated) values
    double p = 0.075 / 12; // 7.5% annual interest rate
    double T = yeras * 12;
    double S = D * ((pow(1 + p, T) - 1) / p);

    // echoing input values, unformatted
    cout << "In " << years << " years , $";
    cout << D << " deposited per month will grow to $";

    // formatting output (see 4.2)
    cout.self(ios::fixed | ios ::showpoint);
    cout << setprecision(2);
    cout << S << "." << endl;
}