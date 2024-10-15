#include<iostream>
using namespace std;

/* 
void print(int n) {

    if(n == 0)
        return;
    
    cout << n << endl;
    print(n-1);

}
*/

//Backtracking
void print(int i, int n) {

    //Base case
    if(i > n)
        return;

    print(i+1, n);
    cout << i << endl;

}

int main() {

    int n;
    cout << "Enter n: ";
    cin >> n;

    //print(n);
    print(1, n);

}