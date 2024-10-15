/*

    Count unique characters in a string

*/


#include<iostream>
using namespace std;

int main() {

    string s;
    getline(cin, s);

    //Pre-compute
    //int hash[256]; - All characters
    
    int hash[27] = {0}; //a - z or A - Z
    for(int i = 0; i < s.size(); i++) {
        /*
            Access hash of s and index will be the character
            We're making a mapping of a - z to 0 - 25
        */
        hash[s[i]-'a']++; 
    }

    //Fetch
    for(int i = 0; i < s.size(); i++) {
        cout << s[i] << " - " << hash[s[i]-'a'] << endl;
    }


}