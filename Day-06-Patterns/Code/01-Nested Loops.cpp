#include <iostream>
using namespace std;

int main () {
    int num;
    cout << "enter number : ";
    cin >> num;
    
    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= num; j++){
            cout << i << " ";
        }
        cout << endl;
    } 
    return 0;
}