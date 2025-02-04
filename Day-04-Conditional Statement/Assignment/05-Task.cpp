#include <iostream>
using namespace std;

int main () {
    int a, b;
    char op;

    cout << "enter a : ";
    cin >> a;
    cout << "enter b : ";
    cin >> b;
    cout << "enter expression (+,-,*,/)";
    cin >> op;

    //Calculator
    switch (op)
    {
    case '+': 
        cout << "a + b = " << a+b << endl;
        break;
    case '-': 
        cout << "a - b = " << a-b << endl;
        break;
    case '*': 
        cout << "a * b = " << a*b << endl;
        break;
    case '/': 
        cout << "a / b = " << a/b << endl;
        break;
    default:    
        cout << "You have entered wrong Symbol." << endl;
    }
    return 0;
}