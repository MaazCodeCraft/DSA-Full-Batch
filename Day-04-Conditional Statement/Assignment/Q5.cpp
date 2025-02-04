#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter 3 digits numbers : ";
    cin >> n;

    int num = n;

    int ditit1 = num % 10;
    num /= 10;
    int ditit2 = num % 10;
    num /= 10;
    int ditit3 = num % 10;
    num /= 10;
    int cubeSum = ditit1*ditit1*ditit1 + ditit2*ditit2*ditit2 + ditit3*ditit3*ditit3;

    if (cubeSum == n){
        cout << n << " is Armstrong Number." << endl;
    } else {
        cout << n << " is not Armstrong Number." << endl;
    }

    return 0;
}