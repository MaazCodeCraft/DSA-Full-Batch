#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter a Number : ";
    cin >> n;

    //Upper Part
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n-i; j++){
            cout << " ";
        }
        cout << "*";
        if (i != 1) {
            for (int j = 1; j <= (2*i)-2-1; j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    //Lower Part
    for (int i = n-1; i >= 1; i--){
        for (int j = 1; j <= n-i; j++){
            cout << " ";
        }
        cout << "*";
        if (i != 1) {
            for (int j = 1; j <= (2*i)-2-1; j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}