#include <iostream>
using namespace std;

int main () {
    int a = 3;
    int b = 5;
    //OR
    cout << ((a < b) && (a > b)) << endl; // False
    //AND
    cout << ((a < b) || (a > b)) << endl; // True
    //NOT
    cout << !((a < b) || (a > b)) << endl; // False
    return 0;
}