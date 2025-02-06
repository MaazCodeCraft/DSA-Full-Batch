#include <iostream>
using namespace std;

int  main () {
    int num;
    cout << "Enter Number : ";
    cin >> num;
    int lastDigit, sum = 0;
    while (num > 0)
    {
       lastDigit = num % 10;
       sum += lastDigit;
       num /= 10;
    }

    cout << "Sum = " << sum << endl;
    
    return 0;
}