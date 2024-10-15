#include <iostream>
#include <string>
#include <algorithm>

// Function to check if a string is a palindrome
bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.size() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

// Function to get the next palindrome of a given string
std::string nextPalindrome(std::string str) {
    int n = str.size();
    std::string left_half = str.substr(0, (n + 1) / 2); // Get the left half
    std::string mirror = left_half;

    // Create the palindrome by mirroring the left half
    if (n % 2 == 0) {
        std::reverse(mirror.begin(), mirror.end());
        mirror = left_half + mirror;
    } else {
        std::reverse(mirror.begin(), mirror.end());
        mirror = left_half + mirror.substr(1);
    }

    // Check if the mirrored string is greater than the original
    if (mirror > str) {
        return mirror; // Found the next palindrome
    }

    // Increment the left half and create a new palindrome
    int carry = 1; // We need to increment
    for (int i = left_half.size() - 1; i >= 0; --i) {
        int new_digit = (left_half[i] - '0') + carry; // Convert char to int
        if (new_digit == 10) {
            carry = 1; // Carry for next digit
            new_digit = 0; // Reset to 0
        } else {
            carry = 0; // No carry anymore
        }
        left_half[i] = new_digit + '0'; // Convert back to char
    }
    
    // If we have a carry after the last increment
    if (carry) {
        left_half = "1" + left_half; // Add 1 at the start
    }

    // Create the new palindrome
    mirror = left_half;
    if (n % 2 == 0) {
        std::reverse(mirror.begin(), mirror.end());
        mirror = left_half + mirror;
    } else {
        std::reverse(mirror.begin(), mirror.end());
        mirror = left_half + mirror.substr(1);
    }

    return mirror;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    std::string result = nextPalindrome(input);
    std::cout << "The next palindrome is: " << result << std::endl;

    return 0;
}
