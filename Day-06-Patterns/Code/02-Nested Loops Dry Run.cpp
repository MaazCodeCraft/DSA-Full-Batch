#include <iostream>
using namespace std;

int main () {
    int num;
    cout << "enter number : ";
    cin >> num;
    int i;
    for (i = 1; i <= num; i++){
        int val = i;
        for (int j = 1; j <= num+1; j++){
            cout << val << " ";
        }
        cout << endl;
    } 
    cout << "Value of i = " << i << endl;
    return 0;
}