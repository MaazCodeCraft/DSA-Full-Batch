#include <iostream>
using namespace std;

int largestNumber (int a, int b, int c) {
    if (a >= b && a >= c){
        return a;
    } else if (b >= a && b >= c){
        return b;
    } else {
        return c;
    }
}

int main () {
    int n1, n2, n3;
    cout << "Enter 1st Number : ";
    cin >> n1;
    cout << "Enter 2nd Number : ";
    cin >> n2;
    cout << "Enter 3rd Number : ";
    cin >> n3;

    cout << "Largest Number is = " << largestNumber (n1,n2,n3) << endl;

  return 0;
}