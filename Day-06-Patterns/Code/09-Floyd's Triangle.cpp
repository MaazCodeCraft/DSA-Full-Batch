#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "enter number : ";
    cin >> n;
    int num = 1;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << num++ << " "; //Post Increment
        }
        cout << endl;
    } 
    return 0;
}