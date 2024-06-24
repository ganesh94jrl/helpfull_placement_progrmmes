//:program to find the greatest common divisor (GCD) and least common multiple (LCM) of two numbers.

#include <iostream>
using namespace std;

// Function to find the GCD using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find the LCM
int lcm(int a, int b, int gcdValue) {
    return (a * b) / gcdValue;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int gcdValue = gcd(num1, num2);
    int lcmValue = lcm(num1, num2, gcdValue);

    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcdValue << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcmValue << endl;

    return 0;
}
