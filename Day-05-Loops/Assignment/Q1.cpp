#include <iostream>
#include <cmath>
using namespace std;

int main () {
     int num;
     cout << "entered number : ";
     cin >> num;
     
    int fact = 1;
    for (int i = 1; i <= num; i++){
        fact *= i;
    }
    cout << "Factorail of " << num << "! is " << fact << endl;
    return 0;
}