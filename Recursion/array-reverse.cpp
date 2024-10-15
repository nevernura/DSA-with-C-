#include<iostream>
using namespace std;

//Two pointer approach
void printTwo(int arr[], int l, int r) {

    if(l == r)
        return;

    swap(arr[l], arr[r]);

    printTwo(arr, l+1, r-1);

}


//Single variable approach
void printOne(int arr[], int i, int n) {

    //Base case
    if(i > n/2)
        return;
    
    swap(arr[i], arr[n-i-1]);

    printOne(arr, i+1, n);

}

int main() {

    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Array Input:\n";
    for(int i = 0; i < n; i++) {
        cout << i+1 << ": ";
        cin >> arr[i]; 
    }

    printOne(arr, 0, n);
    cout << "Array reverse: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }

}