#include <iostream>

using namespace std;

typedef struct
{
    int numerator;
    unsigned int denominator;
} Rational;

Rational Sum(Rational r1, Rational r2)
{
    Rational sum;
    sum.numerator = r1.numerator * r2.denominator + r2.numerator * r1.denominator;
    sum.denominator = r1.denominator * r2.denominator;
    return sum;
}

Rational Multiply(Rational r1, Rational r2)
{
    Rational multiply;
    multiply.numerator = r1.numerator * r2.numerator;
    multiply.denominator = r1.denominator * r2.denominator;
    return multiply;
}

void comparison(Rational r1, Rational r2)
{
    int n1, n2;
    n1 = r1.numerator * r2.denominator;
    n2 = r2.numerator * r1.denominator;
    if (n1 == n2)
        cout << "Numbers are equal" << endl;
    else if (n1 > n2)
        cout << "The first number is greater" << endl;
    else
        cout << "The second number is greater" << endl;
}

int gcd(Rational r)
{
    unsigned int n, d;
    n = (r.numerator >= 0) ? r.numerator : -r.numerator;
    d = r.denominator;
    while (n > 0 && d > 0)
    {
        if (n > d)
            n %= d;
        else
            d %= n;
    }
    return n + d;
}

int main()
{
    Rational r1, r2, sum, multiply;
    cout << "Rational first:" << endl;
    cin >> r1.numerator;
    cin >> r1.denominator;
    cout << "Rational second:" << endl;
    cin >> r2.numerator;
    cin >> r2.denominator;
    sum = Sum(r1, r2);
    multiply = Multiply(r1, r2);
    cout << endl << "Rational first: " << r1.numerator/gcd(r1) << "/" << r1.denominator/gcd(r1) << endl;
    cout << "Rational second: " << r2.numerator/gcd(r2) << "/" << r2.denominator/gcd(r2) << endl;
    cout << "Sum = " << sum.numerator/gcd(sum) << "/" << sum.denominator/gcd(sum) << endl;
    cout << "Multiply = " << multiply.numerator/gcd(multiply) << "/" << multiply.denominator/gcd(multiply) << endl;
    comparison(r1, r2);
    return 0;
}

