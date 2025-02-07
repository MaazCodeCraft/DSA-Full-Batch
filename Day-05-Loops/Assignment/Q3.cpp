#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int num;
    cout << "entered number : ";
    cin >> num;

    int n = num;

    int cubeSum = 0;
    while (n > 0)
    {
    int lastDigit = n % 10;
    cubeSum += lastDigit * lastDigit * lastDigit;
    n /= 10;
    }

    if (num == cubeSum){
    cout << "Armstrong number\n";
    } else {
    cout << "NOT an Armstrong number\n";
    }
    return 0;
}