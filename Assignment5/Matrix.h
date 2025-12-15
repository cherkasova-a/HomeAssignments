/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment5
*/
#pragma once
#include <vector>
#include <stdexcept>

template<typename T>
class Matrix {
private:
    int rows, cols;
    std::vector<std::vector<T>> data;

public:
    Matrix(int r, int c) : rows(r), cols(c), data(r, std::vector<T>(c, T{})) {}
    Matrix(const std::vector<std::vector<T>>& init) : rows(init.size()), cols(init[0].size()), data(init) {}

    int getRows() const { return rows; }
    int getCols() const { return cols; }
    const std::vector<std::vector<T>>& getData() const { return data; }

    Matrix<T> operator+(const Matrix<T>& other) const {
        if (rows != other.rows || cols != other.cols) throw std::runtime_error("Dimension mismatch");
        Matrix<T> result(rows, cols);
        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
                result.data[i][j] = data[i][j] + other.data[i][j];
        return result;
    }

    Matrix<T> operator*(const T& scalar) const {
        Matrix<T> result(rows, cols);
        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
                result.data[i][j] = data[i][j] * scalar;
        return result;
    }

    Matrix<T> operator*(const Matrix<T>& other) const {
        if (cols != other.rows) throw std::runtime_error("Dimension mismatch");
        Matrix<T> result(rows, other.cols);
        for(int i=0;i<rows;i++)
            for(int j=0;j<other.cols;j++)
                for(int k=0;k<cols;k++)
                    result.data[i][j] = result.data[i][j] + data[i][k] * other.data[k][j];
        return result;
    }

    Matrix<T> transpose() const {
        Matrix<T> result(cols, rows);
        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
                result.data[j][i] = data[i][j];
        return result;
    }

    bool operator==(const Matrix<T>& other) const {
        return data == other.data;
    }
};
