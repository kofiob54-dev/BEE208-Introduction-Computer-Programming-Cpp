#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double r;
    cout << "Enter radius: ";
    cin >> r;
    double area = 3.14159 * pow(r, 2);
    cout << "Area: " << area << endl;
    return 0;
}