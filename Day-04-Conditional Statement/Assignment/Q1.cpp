#include <iostream>
using namespace std;

int main () {
    int num;

    cout << "enter number : ";
    cin >> num;
    
    if (num > 0) {
        cout << "Positive Number.\n";
    } else if (num < 0){
        cout << "Negative Number.\n" << endl;
    } else {
        cout << "Zero Number.\n" << endl;
    }
    
    return 0;
}