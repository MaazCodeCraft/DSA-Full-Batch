#include <iostream>
using namespace std;

int main () {
    // Arithmetic Operators

    int a = 3;
    // a++; 
    // cout << "a = " << a << endl;
    // a--;
    // cout << "a = " << a << endl;

    int b = ++a;
    b = a++;
    cout << "a = " << a << endl; //5
    cout << "b = " << b << endl; //4
    
    return 0;
}