
/*
    Reverse number
    Time Complexity - O(log10(N)) - Since division by 10
    If division is by 2 - then O(log2(N))

*/

//#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;

int main() {

    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;    

    cout << "Number = " << n << endl;

    int flag = 0;
    if(n < 0) {
        n = abs(n);
        flag = 1;
    }
        
    int rev = 0;
    while(n > 0) {
        int d = n%10;
        if((rev < INT_MIN/10) || (rev > INT_MAX/10)) //Makes sure that we work within range of integers
            return 0;
        rev = rev*10 + d;
        n/=10;
    }

    if(flag == 1)
        cout << "Reverse = -" << rev;
    else
        cout << "Reverse = " << rev;
    
}