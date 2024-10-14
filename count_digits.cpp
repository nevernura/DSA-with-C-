
/*
    COunting number of digits
    Time Complexity - O(log10(N)) - Since division by 10
    If division is by 2 - then O(log2(N))

*/

//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {

    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;    

    cout << "Number of digits are: " << (int)(log10(n) + 1) << endl;

    cout << "The digits of " << n << " :\n";
    while(n > 0) {
        int d = n%10;
        count++;
        cout << d << endl;
        n/=10;
    }

    //cout << "Number of digits are: " << count;
    
}