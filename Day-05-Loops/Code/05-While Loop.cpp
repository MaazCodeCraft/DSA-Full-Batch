#include <iostream>
using namespace std;

int main () {
    int num;
    cout << "Enter Number : ";
    cin >> num;

    int i = 1;
    while (i <= num){
        cout << i << " ";
        if (i % 10 == 0){
            cout << endl;
        }
        i++;
    }
    return 0;
}