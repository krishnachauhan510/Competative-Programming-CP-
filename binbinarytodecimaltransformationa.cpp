#include <bits/stdc++.h>
using namespace std;
#define ll long long
string decimalToBinary(int decimal) {
    if (decimal == 0) return "0";
    string binary = "";
    while (decimal > 0) {
        binary = char((decimal % 2) + '0') + binary; // prepend 0 or 1
        decimal /= 2;
    }
    return binary;
}
int binaryToDecimal(const string &binary) {
    int decimal = 0;
    int n = binary.length();
    for (int i = 0; i < n; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, n - i - 1);
        }
    }
    return decimal;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);
}
