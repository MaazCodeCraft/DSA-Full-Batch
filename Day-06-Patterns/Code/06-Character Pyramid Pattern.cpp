#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "enter number : ";
    cin >> n;
    char ch = 'A';

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << ch++; //Post Increment
        }
        cout << endl;
    } 
    return 0;
}