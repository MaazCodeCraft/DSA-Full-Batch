#include <iostream>
using namespace std;

int main () {
    int num;
    cout << "Enter Number : ";
    cin >> num;

    for (int i = 1; i <= num; i++){
        cout << i << " ";
    }

    cout << endl;
    return 0;
}