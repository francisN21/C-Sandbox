#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int dollar1 = 1;
    int dollar2 = 2;
    int dollar5 = 5;
    int dollar10 = 10;
    int dollar20 = 20;
    int dollar50 = 50;
    int dollar100 = 100;
    int dollar500 = 500;
    int dollar1000 = 1000;
    int dollar5000 = 5000;
    int dollar10000 = 10000;
    int dollar100000 = 100000;

    int cashPayment, amountTendered;
    int changeDue = amountTendered - cashPayment;
    cout << "Enter cash payment amount: ";
    cin >> cashPayment;
    cout << "Enter Tendered amount: ";
    cin >> amountTendered;

    changeDue = amountTendered - cashPayment;
    cout << "Change due: " << changeDue << endl;

    cout << "Cash payment amount: " << cashPayment << endl;
    cout << "Tendered amount: " << amountTendered << endl;
    cout << "Change due: " << changeDue << endl;

    int hundredThousands = changeDue / 100000;
    changeDue = changeDue % 100000;
    int tenThousands = changeDue / 10000;
    changeDue = changeDue % 10000;
    int fiveThousands = changeDue / 5000;
    changeDue = changeDue % 5000;
    int oneThousands = changeDue / 1000;
    changeDue = changeDue % 1000;
    int fivehunnid = changeDue / 500;
    changeDue = changeDue % 500;
    int wahunnid = changeDue / 100;
    changeDue = changeDue % 100;
    int fithy = changeDue / 50;
    changeDue = changeDue % 50;
    int tweny = changeDue / 20;
    changeDue = changeDue % 20;
    int ten = changeDue / 10;
    changeDue = changeDue % 10;
    int five = changeDue / 5;
    changeDue = changeDue % 5;
    int two = changeDue / 2;
    changeDue = changeDue % 2;
    int one = changeDue / 1;
    changeDue = changeDue % 1;

    cout << "this many 100k dollar bills: " << hundredThousands << endl;
    cout << "ten thousand: " << tenThousands << endl;
    cout << "five thousand: " << fiveThousands << endl;
    cout << "one thousand: " << oneThousands << endl;
    cout << "fivehunnid: " << fivehunnid << endl;
    cout << "one hundred: " << wahunnid << endl;
    cout << "fifthy: " << fithy << endl;
    cout << "twenty: " << tweny << endl;
    cout << "ten: " << ten << endl;
    cout << "five: " << five << endl;
    cout << "two: " << two << endl;
    cout << "one: " << one << endl;

    // cout << "  this many two dollar bills: " << twos << endl;
    // cout << "  this many one dollar bills: " << ones << endl;
}
