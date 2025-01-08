#include <iostream>
using namespace std;

int main () {
    
    int P,R,T;

    cout << "Principal : ";
    cin >> P;
    
    cout << "Rate : ";
    cin >> R;

    cout << "Time : ";
    cin >> T;

    float SI = (P*R*T) / 100;

    cout << "Simple Intrest is : " << SI << endl;

    return 0;
}