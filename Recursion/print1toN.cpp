#include<iostream>

using namespace std;

/*
void print(int i, int n) {

    if(i > n)
        return;

    cout << i << endl;
    print(i+1, n);

}
*/

//Use backtracking
void print(int i, int n) {
    if(i < 1)
        return;
    print(i-1, n);
    cout << i << endl; //This executes only when the base is true
}

int main() {

    int n;
    cout << "Enter n: ";
    cin >> n;

    //print(1, n);
    print(n, n);  

}