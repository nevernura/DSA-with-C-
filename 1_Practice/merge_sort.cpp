#include<iostream>
using namespace std;

void mergeSort(int arr[], int n) {

    if(n <= 1)
        return arr;

    int arr1[], arr2[];

    mergeSort(arr1);
    mergeSort(arr2);
    merge(arr1, arr2);

}

void merge(int arr1[], int arr2[]) {

    

}

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Input elements:\n";
    for(int i = 0; i < n; i++) {
        cout << i << ": ";
        cin >> arr[i];
    }

    cout << "Before sorting:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    mergeSort(arr, n);

    cout << "After sorting:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    

}


/*  Using Vector
vector<int> arr;

sort(arr.begin(), end()) //O(nlogn)





*/