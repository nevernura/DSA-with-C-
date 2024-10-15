#include<iostream>

using namespace std;

/*
Using parameterised approach

int print(int i, int sum) {

    if(i < 1) {
        cout << sum;
        return;
    }

    print(i-1, sum+1);

}

    print(n, 0);

*/

//Functional Approach
int print(int n) {

    if(n == 0)
        return 0;
    
    return n + print(n-1);

}

int main() {

    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Sum of " << n << " numbers = " << print(n);  

}