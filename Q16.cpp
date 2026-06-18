/*
Bitwise NOT ~ : Flips all bits of number. Example: ~5 = -6 in two's complement
Logical NOT! : Converts to bool then negates. Example:!5 = 0,!0 = 1
~ works on bits,! works on true/false
*/
#include <iostream>
using namespace std;
int main() {
    int x = 5;
    cout << "~5 = " << (~x) << endl; // -6
    cout << "!5 = " << (!x) << endl; // 0
    cout << "!0 = " << (!0) << endl; // 1
    return 0;
}