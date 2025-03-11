#include <iostream>
using namespace std;

int decToOct (int decNum) {
    int n = decNum;
    int octNum = 0;
    int pow = 1;
    while (n > 0)
    {
        int rem = n % 8;
        octNum += rem * pow;
        pow *= 10;
        n /= 8;
    }
    return octNum; 
}


int main () {
    int num;
    cout << "Enter a Number : ";
    cin >> num;
    cout << "\nDecimal To octal Converter \n";
    cout << "Octal Number of " << num << " is : " << decToOct (num) << endl;

    return 0;
}