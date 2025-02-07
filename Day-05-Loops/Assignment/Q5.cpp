#include <iostream>
using namespace std;

int main () {
    int num;
    cout << "entered number : ";
    cin >> num;

    int first = 0, sec = 1;
    cout << first << " " << sec << " ";

    for (int i = 2; i < num; i++){
        int third = first + sec;
        cout << third << " ";
        first = sec;
        sec = third;
    }
    cout << "\n";

    return 0;
}