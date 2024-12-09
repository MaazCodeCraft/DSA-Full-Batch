#include <iostream>
using namespace std;

int main () {
    
    int a, b;
    cout << "Enter 1st Number : ";
    cin >> a;

    cout << "Enter 2nd Number : ";
    cin >> b;

    int sum = a+b;
    int prod = a*b;
    int sub = a-b;
    
    cout << "Sum is =  " << sum << endl;
    cout << "Product is =  " << prod << endl;
    cout << "Subtraction is =  " << sub << endl;

    return 0;
}