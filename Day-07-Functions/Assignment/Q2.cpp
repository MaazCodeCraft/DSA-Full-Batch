#include <iostream>
using namespace std;

int sumOfDig (int a) {
    int sum = 0;
    while (a > 0)
    {
        int lastDigit = a % 10;
        sum += lastDigit;
        a /= 10;
    }
    return sum;  
}

int main () {
    int num;
    cout << "Enter a Number : ";
    cin >> num;

    cout << "Sum of Digits is = " << sumOfDig (num) << endl;
 
  return 0;
}