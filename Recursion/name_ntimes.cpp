#include<iostream>
using namespace std;

void printName(int n) {

    if(n == 0)
        return;
    
    cout << "Lammi" << endl;
    
    printName(n-1);

}

int main() {

    int n;
    cout << "Enter a number:";
    cin >> n;

    printName(n);

}