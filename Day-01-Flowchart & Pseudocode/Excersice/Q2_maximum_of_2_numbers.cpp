#include <iostream>
using namespace std;

int main ()
{
  int num1, num2;

  cout << "Enter 1st Number:  ";
  cin >> num1;

  cout << "Enter 2nd Number:  ";
  cin >> num2;

  if (num1 > num2)
  {
    cout << num1 << " is maximun number.\n";
  }else{
    cout << num2 << " is maximun number.\n";
  }
  return 0;
}