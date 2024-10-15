
/*
    Armstrong number - All single digit numbers are Armstrong
    123 = 1^3 + 2^3 + 3^3
    Time Complexity - O(log10(N)) - Since division by 10
    If division is by 2 - then O(log2(N))

*/

//#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;

/*

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;    

    cout << "Number = " << n << endl;
    
    int sum = 0, tmp = n;
    while(n > 0) {
        int d = n%10;
        if((sum < INT_MIN/10) || (sum > INT_MAX/10)) //Makes sure that we work within range of integers
            return 0;
        sum = sum + d*d*d;
        n/=10;
    }

    cout << "Sum of cube = " << sum;
    if(tmp == sum)
        cout << "Armstrong number" << endl;
    else
        cout << "Non-armstrong number" << endl;
    
}

*/


int main() {

    cout << "Armstrong Numbers between 1 and 10000 are:\n";
    for(int n = 0; n<=10000; n++) {
        
        int sum = 0, tmp = n;
        int digits = log10(n) + 1; 

        while(tmp > 0) {
            int d = tmp%10;
            if((sum < INT_MIN/10) || (sum > INT_MAX/10)) //Makes sure that we work within range of integers
                return 0;
            sum = sum + pow(d, digits);
            tmp/=10;
        }

        if(n == sum)
            cout << n << endl;
    }
    
    
}