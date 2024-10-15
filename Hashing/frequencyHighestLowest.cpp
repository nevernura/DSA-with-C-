/*
    Find highest and lowest frequency element
*/

#include<iostream>
#include<unordered_map>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> count;
    //Pre-computing
    for(int i=0; i<n; i++) {
        count[arr[i]]++;
    }

    //Fetching
    int max = INT_MIN, min = INT_MAX;
    for(auto it = count.begin(); it != count.end(); it++) {
        if(max < it->second)
            max = it->first;
        if(min > it->second)
            min = it->first;
        cout << it->first << " - " << it->second << endl;
    }

    cout << "Highest frequency = " << max << endl;
    cout << "Lowest frequency = " << min << endl;

    return 0;

}