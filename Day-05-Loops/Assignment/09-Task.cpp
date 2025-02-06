#include <iostream>
#include <cmath>
using namespace std;

int main () {
     int num;
     cout << "entered number : ";
     cin >> num;
     
    bool isPrime = true;
     for (int i = 2; i <= sqrt(num); i++){
        if (num % i == 0){
            isPrime = false;
            break;
        }
     }
     if (isPrime){
        cout << num << " is prime number." << endl;
     }else {
        cout << num << " is non-prime number." << endl;
     }
    return 0;
}