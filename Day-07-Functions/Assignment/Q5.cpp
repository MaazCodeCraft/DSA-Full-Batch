#include <iostream>
using namespace std;

char newChar (char ch){
    if (ch == 'z'){
        return 'a';
    } else {
        return ch + 1;
    }
}

int main () {
    char ch;
    cout << "Enter Alphaber : ";
    cin >> ch;

    cout << newChar (ch) << endl;
  return 0;
}