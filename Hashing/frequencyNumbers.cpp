/*
    Hashing - Pre-compute/fetch
    Find the frequency of elements in an array or list or string
*/
#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //Pre-compute
    int hash[13] = {0};
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++; //Update the count of arr[i] which is a position in hash[]
    }

    //Fetch
    for(int i = 0; i < n; i++) {
        cout << i << " - " << hash[i] << endl;
    }

}