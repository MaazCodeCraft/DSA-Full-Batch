#include <iostream>
using namespace std;

int numbers (int a, int b) {
    return a*a + b*b + 2*a*b;
}

int main () {
    int n1, n2;
    cout << "Enter 1st Number : ";
    cin >> n1;
    cout << "Enter 2nd Number : ";
    cin >> n2;

    cout << numbers(n1,n2) << endl;
  
  return 0;
}