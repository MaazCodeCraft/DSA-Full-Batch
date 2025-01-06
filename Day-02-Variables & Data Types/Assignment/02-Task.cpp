#include <iostream>
using namespace std;

int main () {
    
    float sci, eng, math;
    cout << "Enter Science Marks : ";
    cin >> sci;

    cout << "Enter English Marks : ";
    cin >> eng;

    cout << "Enter Math Marks : ";
    cin >> math;

    float avg = (sci + eng + math)/3;
    
    cout << "Average Marks =  " << avg << endl;

    return 0;
}