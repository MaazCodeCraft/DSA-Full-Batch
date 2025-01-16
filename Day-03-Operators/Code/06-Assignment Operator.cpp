#include <iostream>
using namespace std;

int main () {
    int a = 10;
    
    a += 5; // a = a + 5 => 15
    cout << a << endl;
    a -= 5; // a = a - 5 => 10
    cout << a << endl;
    a *= 5; // a = a * 5 => 50
    cout << a << endl;
    a /= 5; // a = a / 5 => 10
    cout << a << endl;
    a %= 5; // a = a % 5 => 0
    cout << a << endl;

    return 0;
}