#include <iostream>
using namespace std;

int main () {
    int num;
    cout << "entered number : ";
    cin >> num;

    for (int i = 2; i <= num; i++){
        int curr = i;
        bool isPrime = true;
        for (int j = 2; j*j <= i; j++){
            if (curr % j == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            cout << curr << " ";
        }
    }

    return 0;
}