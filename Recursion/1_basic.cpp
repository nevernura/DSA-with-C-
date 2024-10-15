#include<iostream>

using namespace std;

int n = 0;

void print() {
    if(n == 5) 
        return;
    cout << n << endl;
    n++;
    print();
}

int main() {

    print();
    
}