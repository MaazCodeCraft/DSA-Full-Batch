#include <iostream>
using namespace std;

int main () {
    bool isAdult;
    int age;
    cout << "enter age : ";
    cin >> age;

    // if (age >= 18){
    //     isAdult = false;
    // }else {
    //     isAdult = true;
    // }

    isAdult = (age >= 18)? true : false;
    cout << isAdult << endl;

    //Largest of two numbers
    int a = 10, b = 5;
    int largest = (a >= b)? a : b;
    cout << "Largest is = " << largest << endl;

    //ODD or Even
    int num = 10;
    int isEven = (num % 2 == 0)? true : false;
    cout << isEven << endl;

    return 0;
}