#include <iostream>
using namespace std;

int main(){

    int num1, num2;

    cout << "Enter the first number > " << endl;
    cin >> num1;

    cout << "Enter the second number > " << endl;
    cin >> num2;    

    // Addition
    cout << "Addition of the two numbers is: " << num1 + num2 << endl;
    
    // Subtraction
    cout << "Subtraction of the two numbers is: " << num1 - num2 << endl;

    // Multiplication
    cout << "Multiplication of the two numbers is: " << num1 * num2 << endl;

    // Division
    cout << "Division of the two numbers is: " << num1 / num2 << endl;

    // Modulo
    cout << "Division of the two numbers is: " << num1 % num2 << endl;

    return 0;
}