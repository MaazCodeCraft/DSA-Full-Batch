#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "enter numbers : ";
    cin >> n;
    
    // Upper Part
    for (int i = 1; i <= n; i++){
        //Star
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        // Spaces
        for (int j = 1; j <= 2*(n-i); j++){
            cout << " ";
        }
        //Star
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    //Reverse
     // Upper Part
    for (int i = n; i >= 1; i--){
        //Star
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        // Spaces
        for (int j = 1; j <= 2*(n-i); j++){
            cout << " ";
        }
        //Star
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }

    // // Lower Part
    // for (int i = 1; i <= n; i++){
    //     //Stars
    //     for (int j = 1; j <= n-i+1; j++){
    //         cout << "*";
    //     }
    //     //Spaces
    //     for (int j = 1; j <= (2*i)-2; j++){
    //         cout << " ";
    //     }
    //     //Stars
    //     for (int j = 1; j <= n-i+1; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    return 0;
}