/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment5
*/
#pragma once
#include <numeric>

struct Rational {
    int num = 0;
    int den = 1;

    Rational() = default;
    Rational(int n, int d) : num(n), den(d) { normalize(); }

    void normalize() {
        if (den < 0) { num = -num; den = -den; }
        int g = std::gcd(num, den);
        num /= g; den /= g;
    }

    Rational operator+(const Rational& other) const {
        return Rational(num * other.den + den * other.num, den * other.den);
    }

    Rational operator*(const Rational& other) const {
        return Rational(num * other.num, den * other.den);
    }

    bool operator==(const Rational& other) const {
        return num == other.num && den == other.den;
    }
};
