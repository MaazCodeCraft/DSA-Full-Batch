#include <iostream>
using namespace std;

int main ()
{
  int a;

  cout << "Enter Number:";
  cin >> a;

  if (a % 2 == 0)
  {
    cout << a << " is even number." << endl; 
  }
  else{
    cout << a << " is odd number." << endl;
  }
  
  return 0;
}