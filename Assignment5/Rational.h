/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment5
*/
#pragma once
#include <iostream>

class Rational {
    int num;
    int den;
    void normalize();

public:
    Rational(int n = 0, int d = 1);

    int numerator() const;
    int denominator() const;

    Rational operator+(const Rational& other) const;
    Rational operator-(const Rational& other) const;
    Rational operator*(const Rational& other) const;
    Rational operator/(const Rational& other) const;

    bool operator==(const Rational& other) const;
    bool operator!=(const Rational& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Rational& r);
};

