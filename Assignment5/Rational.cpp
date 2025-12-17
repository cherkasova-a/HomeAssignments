/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment5
*/
#include "Rational.h"
#include <stdexcept>
#include <numeric>

void Rational::normalize() {
    if (den == 0)
        throw std::invalid_argument("zero denominator");
    if (den < 0) {
        num = -num;
        den = -den;
    }
    int g = std::gcd(num, den);
    num /= g;
    den /= g;
}

Rational::Rational(int n, int d) : num(n), den(d) {
    normalize();
}

int Rational::numerator() const {
    return num;
}

int Rational::denominator() const {
    return den;
}

Rational Rational::operator+(const Rational& other) const {
    return Rational(num * other.den + other.num * den, den * other.den);
}

Rational Rational::operator-(const Rational& other) const {
    return Rational(num * other.den - other.num * den, den * other.den);
}

Rational Rational::operator*(const Rational& other) const {
    return Rational(num * other.num, den * other.den);
}

Rational Rational::operator/(const Rational& other) const {
    return Rational(num * other.den, den * other.num);
}

bool Rational::operator==(const Rational& other) const {
    return num == other.num && den == other.den;
}

bool Rational::operator!=(const Rational& other) const {
    return !(*this == other);
}

std::ostream& operator<<(std::ostream& os, const Rational& r) {
    os << r.num << "/" << r.den;
    return os;
}

