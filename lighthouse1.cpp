#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int height = 100; // height in feet
    float dim = sqrt(0.8 * height);
    cout.setf(ios::fixed);
    cout << "A " << height << foot tall lighthouse can be seen from "<<setprecision(0) 
         << dim << " miles away ";
    return 0;
}
