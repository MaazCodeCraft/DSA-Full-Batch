#include <iostream>
using namespace std;

int  main () {
    int num;
    cout << "Enter Number : ";
    cin >> num;
    while (num > 0)
    {
       int reversed = (num % 10);
       cout << reversed;
       num /= 10;
    }
    
    return 0;
}