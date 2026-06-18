#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int binToDec(string bin) {
    int dec = 0, power = 0;
    for(int i = bin.length() - 1; i >= 0; i--) {
        if(bin[i] == '1') dec += pow(2, power);
        power++;
    }
    return dec;
}

int main() {
    string binary;
    cout << "Enter binary number: ";
    cin >> binary;
    int decimal = binToDec(binary);
    
    cout << "Decimal: " << decimal << endl;
    cout << "Hexadecimal: " << hex << uppercase << decimal << endl;
    cout << "Octal: " << oct << decimal << endl;
    return 0;
}