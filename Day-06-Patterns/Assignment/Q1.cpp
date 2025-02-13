#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    bool val = true;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << val << " ";
            val = !val;
        }
        cout << endl;
    }
    return 0;
}