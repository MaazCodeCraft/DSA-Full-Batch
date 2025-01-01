#include <iostream>
using namespace std;

int main () {

    int age = 25;
    char grade = 'c';
    bool isAdult = true;
    float price = 2.55;
    double weight = 99.554;

    cout << "Size of int = " << sizeof(int) << endl;
    cout << "Size of Char = " << sizeof(char) << endl;
    cout << "Size of Bool = " << sizeof(bool) << endl;
    cout << "Size of Float = " << sizeof(float) << endl;
    cout << "Size of Double = " << sizeof(double) << endl;

    cout << age << endl;
    cout << grade << endl;
    cout << isAdult << endl;
    cout << price << endl;
    cout << weight << endl;
    
    return 0;
}