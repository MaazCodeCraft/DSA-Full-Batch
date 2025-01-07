#include <iostream>
using namespace std;

int main () {
    
    float pencilCost, penCost, eraserCost;

    cout <<"Enter pencil cost : ";
    cin >> pencilCost;

    cout <<"Enter pen item cost : ";
    cin >> penCost;

    cout <<"Enter eraser item cost : ";
    cin >> eraserCost;

    float totalCost = pencilCost + penCost + eraserCost;
    cout << "Total Cost is : " << totalCost << endl;

    float gst = totalCost + (totalCost * 0.18); 
    cout << "GST Tax is : " << totalCost * 0.18 << endl;
    cout << "Total Cost with GST Tax is : " << gst << endl;
    return 0;
}