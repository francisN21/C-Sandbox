#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int height; // height in feet

    cout << "Enter lighthouse height: ";
    // storing it in a variable
    cin >> height;

    if (height < 1000)
    {
        float dim = sqrt(0.8 * height);
        cout.setf(ios::fixed);
        cout << "A " << height << " foot tall lighthouse can be seen from " << setprecision(0)
             << dim << " miles away ";
        return 0;
    }
    else
    {
        cout << "way to high dude";
    }
}