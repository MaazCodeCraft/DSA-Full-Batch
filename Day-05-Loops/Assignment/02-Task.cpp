#include <iostream>
using namespace std;

int  main () {
    int num;
    cout << "Enter Number : ";
    cin >> num;
    
    for (int i = num; i > 0; i--){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}