wap to program polynomial eualiation
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


double evaluatePolynomial(const vector<int>& coeffs, int x) {
    double result = 0;
    int n = coeffs.size();

    for (int i = 0; i < n; i++) {
        result += coeffs[i] * pow(x, i);  // coeff[i] * x^i
    }
    return result;
}

int main() {
    int degree;
    cout << "Enter degree of polynomial: ";
    cin >> degree;

    vector<int> coeffs(degree + 1);
    cout << "Enter coefficients (from constant term to highest degree):\n";
    for (int i = 0; i <= degree; i++) {
        cout << "Coefficient of x^" << i << ": ";
        cin >> coeffs[i];
    }

    int x;
    cout << "Enter value of x: ";
    cin >> x;

    double result = evaluatePolynomial(coeffs, x);
    cout << "Polynomial value at x = " << x << " is: " << result << endl;

    return 0;
}