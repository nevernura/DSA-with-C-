/*

Find divisors of a number
Time Complexity - O(sqrt(n))

*/

#include<bits/stdc++.h>

using namespace std;

void printDivisor(int n) {

    vector<int> divisors;
    for(int i=1; i*i<=n; i++) {
        if(n % i == 0)
            divisors.push_back(i);
        if((n/i) != i) //When we reached the mid way point of Eg, 6*6
            divisors.push_back(n/i);
            
    }

    sort(divisors.begin(), divisors.end());

    for(size_t i = 0; i < divisors.size(); i++)
        cout << divisors[i] << " ";
    cout << endl;

}

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "The divisors of " << n << " are as follows:\n";
    printDivisor(n);

}