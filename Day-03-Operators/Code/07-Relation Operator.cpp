#include <iostream>
using namespace std;

int main () {
    int a = 3;
    int b = 5;
    cout << (a > b) << endl; //False -> 0
    cout << (a < b) << endl; //True -> 1
    cout << (a <= b) << endl; //False -> 0
    cout << (a >= b) << endl; //True -> 1
    cout << (a == b) << endl; //False -> 0
    cout << (a != b) << endl; //True -> 1
    return 0;
}