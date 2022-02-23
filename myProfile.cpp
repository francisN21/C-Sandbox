#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "Ant Student";
    string course = "CS-101";
    char grade = 'A';

    string formLetter = "Congratulations, Ant";
    formLetter = formLetter + ". Your grade in " + course + " is ";
    formLetter = formLetter + grade + '.';

    cout << formLetter << endl;
}