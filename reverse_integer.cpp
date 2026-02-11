#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int reversed = 0;
    
    while (n != 0) {
        int digit = n % 10;    // Get the last digit
        reversed = reversed * 10 + digit;  // Shift digits left and add the last digit
        n /= 10;    // Remove the last digit from the number
    }
    
    return reversed; 
}

int main() {
    int num;
    
    cout << "Enter an integer: ";
    cin >> num;
    
    int reversedNum = reverseNumber(num);
    cout << "Reversed number: " << reversedNum << endl;
    return 0;
}
