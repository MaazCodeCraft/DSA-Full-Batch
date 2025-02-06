#include <iostream>
using namespace std;

int main () {
     int n;
     
     do
     {
        cout << "entered number : ";
        cin >> n;
        if (n % 10 == 0){
            continue;
        }
        cout << "Your entered : " << n << endl;
     } while (true);
     
    return 0;
}