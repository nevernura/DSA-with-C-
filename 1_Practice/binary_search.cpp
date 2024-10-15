#include<iostream>
using namespace std;

int search(int arr[], int n, int key) {

    int low, high;
    low = 0;
    high = n - 1;

    
    while(low <= high) {

        int mid = low + (high - low) / 2;

        if(key < arr[mid])
            high = mid-1;
        else if(key > arr[mid])
            low = mid+1;
        else //if(key == arr[mid])
            return arr[mid];   
    
    }
    
    return -1;

}

int main() {

    //Take array input
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Input sorted elements:\n";
    for(int i = 0; i < n; i++) {
        cout << "Element " << i+1 << " : ";
        cin >> arr[i];
    }

    cout << "Enter element to find:";
    cin >> key;
    cout << "The element is found: " << search(arr, n, key);

}