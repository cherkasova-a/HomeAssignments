/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment5
*/
#include <gtest/gtest.h>
#include "Matrix.h"
#include "Rational.h"
#include <vector>

template<typename T>
bool equalData(const std::vector<std::vector<T>>& a,
               const std::vector<std::vector<T>>& b)
{
    if (a.size() != b.size())
        return false;

    for (size_t i = 0; i < a.size(); ++i)
    {
        if (a[i].size() != b[i].size())
            return false;

        for (size_t j = 0; j < a[i].size(); ++j)
            if (a[i][j] != b[i][j])
                return false;
    }
    return true;
}

TEST(MatrixInt, Operations)
{
    Matrix<int> a(std::vector<std::vector<int>>{{1, 2}, {3, 4}});
    Matrix<int> b(std::vector<std::vector<int>>{{5, 6}, {7, 8}});

    Matrix<int> sum(std::vector<std::vector<int>>{{6, 8}, {10, 12}});
    Matrix<int> scaled(std::vector<std::vector<int>>{{2, 4}, {6, 8}});
    Matrix<int> prod(std::vector<std::vector<int>>{{19, 22}, {43, 50}});

    EXPECT_TRUE(equalData((a + b).getData(), sum.getData()));
    EXPECT_TRUE(equalData((a * 2).getData(), scaled.getData()));
    EXPECT_TRUE(equalData((a * b).getData(), prod.getData()));
}

TEST(MatrixInt, Transpose)
{
    Matrix<int> a(std::vector<std::vector<int>>{{1, 2, 3}, {4, 5, 6}});
    Matrix<int> t(std::vector<std::vector<int>>{{1, 4}, {2, 5}, {3, 6}});

    EXPECT_TRUE(equalData(a.transpose().getData(), t.getData()));
}

TEST(MatrixDouble, Operations)
{
    Matrix<double> a(std::vector<std::vector<double>>{{1.0, 2.0}, {3.0, 4.0}});
    Matrix<double> b(std::vector<std::vector<double>>{{1.0, 2.0}, {2.0, 1.0}});

    Matrix<double> sum(std::vector<std::vector<double>>{{2.0, 4.0}, {5.0, 5.0}});
    Matrix<double> prod(std::vector<std::vector<double>>{{5.0, 4.0}, {11.0, 10.0}});

    EXPECT_TRUE(equalData((a + b).getData(), sum.getData()));
    EXPECT_TRUE(equalData((a * b).getData(), prod.getData()));
}

TEST(Rational, Invariants)
{
    Rational r1(2, 4);
    Rational r2(-3, -6);

    EXPECT_EQ(r1, Rational(1, 2));
    EXPECT_EQ(r2, Rational(1, 2));
}

TEST(MatrixRational, Operations)
{
    Matrix<Rational> a(std::vector<std::vector<Rational>>{
        {Rational(1, 2), Rational(1, 3)},
        {Rational(1, 4), Rational(1, 5)}
    });

    Matrix<Rational> b(std::vector<std::vector<Rational>>{
        {Rational(1, 2), Rational(2, 3)},
        {Rational(3, 4), Rational(4, 5)}
    });

    Matrix<Rational> sum(std::vector<std::vector<Rational>>{
        {Rational(1, 1), Rational(1, 1)},
        {Rational(1, 1), Rational(1, 1)}
    });

    EXPECT_TRUE(equalData((a + b).getData(), sum.getData()));
}

