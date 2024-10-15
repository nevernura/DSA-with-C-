#include<iostream>
using namespace std;

//Multilpe recursion call
// O(2^n)
int fibo(int n) {

    //If n == 0 or 1 return 0 or 1 
    if(n <= 1)
        return n;

    int first = fibo(n-1);
    int last = fibo(n-2);

    return first + last;

}

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << fibo(n);

}