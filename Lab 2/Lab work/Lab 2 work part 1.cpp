#include <iostream>
using namespace std;

int main() {
    int num1, num2;   // declares variables

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int sum = num1 + num2;          // addition
    int diff = num1 - num2;         // subtraction
    int product = num1 * num2;      // multiplication
    double quotient = (double)num1 / num2;   // division
    int remainder = num1 % num2;    // modulus

    cout << "sum: " << sum << endl;
    cout << "difference: " << diff << endl;
    cout << "product: " << product << endl;
    cout << "quotient: " << quotient << endl;
    cout << "remainder: " << remainder << endl;

    return 0;
}
