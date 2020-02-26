#include <iostream>
#include <iomanip>
using namespace std;
using std::ios;
using std::endl;

int numerator, denominator, rem, numerator1;


int main()
{
  
    cout << "Please enter numerator: \n";
    cin >> numerator;
    cout << "Please enter denominator: \n";
    cin >> denominator;
    rem = numerator % denominator;
    numerator1 = (numerator - rem) / denominator;
    if (denominator == 0)
    {
        cout << "ERROR: ATTEMPTING TO DIVIDE BY ZERO" << endl;
    }
    else if (numerator > denominator)
    {
        cout << "Mixed Fraction = " << numerator1 << " " << rem << "/" << denominator << endl;
    }
    else if (numerator == denominator)
    {
        cout << "Equals 1";
    }
    else if (numerator < denominator)
    {
        cout << numerator << "/" << denominator;
    }
    



    return 0;
}