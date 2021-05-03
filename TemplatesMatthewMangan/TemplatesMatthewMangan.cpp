/*
* Matthew Mangan
* CIS 1202 501
* May 2, 2021
*/

#include <iostream>

using namespace std;

// Template to half the values

template <class test>
test half(test a)
{
    a = a / 2;

    return a;
}


int main()
{
    int a = 5;
    double b = 25;
    float c = 9;

    // Display the variables

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c);
}


