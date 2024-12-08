#include <iostream>
using namespace std;

int main ()
{
  int num;
  cout << "Enter a Number:  ";
  cin >> num;

  int count = 1;
  int sum = 0;

  while (count <= num)
  {
    sum += count;
    count++;
  }
  
  cout << "Sum is:  " << sum;
  
  return 0;
}