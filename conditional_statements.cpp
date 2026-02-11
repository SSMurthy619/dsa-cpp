#include <iostream>
using namespace std;

int main() {
    int n = 87;
  
    if (n > 0) {

        if (n % 2 == 0) {
            cout << "The number is positive and even.";
        }
        else {
            cout << "The number is positive and odd.";
        }
    }
    // to check if the n is 0
    else if (n == 0) {
        cout << "The number is zero.";
    }
    // to check if the n is negative
    else {
        cout << "The number is negative.";
    }
    return 0;
}