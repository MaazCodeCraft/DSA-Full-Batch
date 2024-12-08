#include <iostream>
using namespace std;

int main ()
{
  int a, b;

  cout << "Enter 1 st Number:";
  cin >> a;

  cout << "Enter 2nd Number:  ";
  cin >> b;

  if (a<b)
  {
    cout << a << " is minimum number." << endl;
  }else{
    cout << b << " is minimum number." << endl;
  }
  
  return 0;
}