#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int age1 = 19;
    int age2 = 21;
    int age3 = 31;
    double averageAge = 0.0;

    averageAge = (age1 + age2 + age3) / 3.0; // 23.66666...

    cout.self(ios::fixed); // without the |ios::showpoint|
    cout << setprecision(0);
    cout << "the average of three ages is " << averageAge << endl;
}