#include<iostream>
using namespace std;

//Using Single Pointer Approach
bool reverse(string &str, int i) {

    if(i >= str.size()/2) //i >= n
        return true;

    if(str[i] != str[str.size() - i -1]) //arr[i] != arr[n-i-1]
        return false; 

    return reverse(str, i+1);

}

//Two pointer approach
bool reverseTwo(int l, int r, string &str) {

    if(l >= r) return true;

    if(str[l] != str[r]) return false; 

    return reverseTwo(l+1, r-1, str);
}

int main() {

    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    //if(reverse(str, 0) == true)

    if(reverseTwo(0, str.size()-1, str) == true)
        cout << "Palindrome";
    else 
        cout << "Non-palindrome";


}