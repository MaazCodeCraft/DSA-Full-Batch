#include <iostream>
using namespace std;

void swap (int &a, int &b) {
  int temp = a;
  a = b; 
  b = temp;
}

int main () {
  int n1, n2;
  cout << "Enter 1st Number : ";
  cin >> n1;
  cout << "Enter 2nd Number : ";
  cin >> n2;
 
  swap (n1, n2);
    cout << "\nAfter Swapping:\n";
    cout << "1st Number: " << n1 << endl;
    cout << "2nd Number: " << n2 << endl;
  
  
  return 0;
}