#include <iostream>
using namespace std;

int  main () {
    int num;
    cout << "Enter Number : ";
    cin >> num;
    int reversed = 0;
    while (num != 0)
    {
       int lastDigit = (num % 10);
       reversed = reversed * 10 + lastDigit;
       num /= 10;
    }

    cout << "Reversed = " << reversed << endl;
    
    return 0;
}