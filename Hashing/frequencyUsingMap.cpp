#include<iostream>
#include<map>


using namespace std;

int main() {
    // Count frequency of elements in array
    
    int n;
    cin >> n;
    
    int arr[n]; // Variable-length array, not standard C++
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Pre-computing frequencies
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++; // Use [] to access map elements
    }

    // Fetching and printing the frequencies
    for (auto it = mp.begin(); it != mp.end(); ++it) { // Use iterator explicitly
        cout << it->first << ": " << it->second << endl; // Print element and its frequency
    }

    return 0;
}
