#include <iostream>
using namespace std;
int main() {
    int x, y, z;
    cout << "Enter 3 integers: ";
    cin >> x >> y >> z;
    if(x == y && y == z) cout << "Equal" << endl;
    else cout << "Not equal" << endl;
    return 0;
}