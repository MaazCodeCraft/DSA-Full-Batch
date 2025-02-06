#include <iostream>
using namespace std;

int main () {
     int num;
     do
     {
       cout << "Enter Number : ";
       cin >> num;
       if (num % 10 == 0){
        break;
       }
       cout << "You entered " << num << endl;
     } while (true);
     
     
    return 0;
}