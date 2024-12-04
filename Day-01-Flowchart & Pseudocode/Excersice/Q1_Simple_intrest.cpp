#include <iostream>
using namespace std;

int main ()
{
  int principal, rate, time;

  cout << "Enter Principal:  ";
  cin >> principal;

  cout << "Enter Rate:  ";
  cin >> rate;

  cout << "Enter Time:  ";
  cin >> time;

  float SI = (principal * rate * time)/100.00; 

  cout << "Simple Intrest is:  " << SI << endl;

  return 0;
}