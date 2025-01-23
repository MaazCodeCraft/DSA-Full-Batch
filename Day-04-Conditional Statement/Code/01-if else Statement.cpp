#include <iostream>
using namespace std;

int main () {
    int age;
    cout << "Enter your age : ";
    cin >> age;

    if (age >= 18){
        cout << "Can Vote.\n";
    } if (age >= 45) {
        cout << "Contest for elections.\n";
    } else {
        cout << "Can't Vote.\n";
    }

    return 0;
}