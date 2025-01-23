#include <iostream>
using namespace std;

int main () {
    int num1, num2;
    cout << "Enter 1st Numer : ";
    cin >> num1;
    cout << "Enter 2nd Numer : ";
    cin >> num2;

   if (num1 > num2){
    cout << "Largest Number is : " << num1 << endl;
   } else {
    cout << "Largest Number is : " << num2 << endl;
   }
    return 0;
}