/*

Find HCF or GCD
Time Complexity - O(log_phi(min(a, b)))

*/


#include<iostream>

using namespace std;

void gcd(int a, int b) {

    
    
    /*
    Approach 1
    int gcd;
    for(int i = 1; i <= min(a, b); i++) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    cout << "GCD of" << a << " and " << b << " = " << gcd; 
    */

    /*
    Approach 2
    int gcd;int gcd;
    for(int i = min(a, b); i >= 1; i--) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
            break;
        }
    }

    cout << "GCD of " << a << " and " << b << " = " << gcd; 
    */

    //Using Euclidean Algorithm
    cout << "GCD of " << a << " and " << b << " = ";
    while(a > 0 && b > 0) {
        if(a > b)
            a = a % b;
        else
            b = b % a;
    }

    if(a == 0)
        cout << b;
    else
        cout << a; 

}

int main() {

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    gcd(a, b);

}