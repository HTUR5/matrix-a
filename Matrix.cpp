#include "Matrix.hpp"
#include <iostream>
#include <vector>

using namespace zich;

namespace zich {

     Matrix::Matrix(const vector<double> &mat, int rows, int cols) {
        return;
    }

    Matrix Matrix::operator-(Matrix const &mat) {
        vector<double> vector1;
        for (double i = 0; i < 100; ++i) {
            vector1.push_back(i);
        }
        Matrix A{vector1, 10, 10};

        return A;
    }

    Matrix Matrix::operator-() {
        vector<double> vector = {1,2,3,4,5,6,7,8,9,10};   
        Matrix A{vector, 5, 2};
        return A;
    }

    Matrix& Matrix::operator-=(Matrix const &mat) {
        vector<double> vector = {1,2,3,4,5,6,7,8,9,10};   
        static Matrix A{vector, 5, 2};
        return A;    
    }

    Matrix Matrix::operator+(Matrix const &mat) {
        vector<double> vector1;
        for (double i = 0; i < 100; ++i) {
            vector1.push_back(i);
        }
        Matrix A{vector1, 10, 10};
        return A;
    }

    Matrix Matrix::operator+() {
        vector<double> vector1;
        for (double i = 0; i < 100; ++i) {
            vector1.push_back(i);
        }
        Matrix A{vector1, 10, 10};

        return A;
    }

    Matrix& Matrix::operator+=(Matrix const &mat) {
        vector<double> vector = {1,2,3,4,5,6,7,8,9,10};   
        static Matrix A{vector, 5, 2};
        return A;
    }

    Matrix Matrix::operator*(double scalar) {
        vector<double> vector = {1,2,3,4,5,6,7,8,9,10};   
        Matrix A{vector, 5, 2};
        return A;
    }

    Matrix Matrix::operator*(Matrix const &mat) {
        vector<double> vector = {1,2,3,4,5,6,7,8,9,10};   
        Matrix A{vector, 5, 2};
        return A;
    }

    Matrix operator*(double const &scalar, Matrix mat) {
        vector<double> vector1;
        for (double i = 0; i < 100; ++i) {
            vector1.push_back(i);
        }
        Matrix A{vector1, 10, 10};

        return A;
    }

    Matrix& Matrix::operator *=(Matrix const &mat) {
        vector<double> vector = {1,2,3,4,5,6,7,8,9,10};   
        static Matrix A{vector, 5, 2};
        return A;
    }

    Matrix& Matrix::operator*=(double scalar) {
        vector<double> vector = {1,2,3,4,5,6,7,8,9,10};   
        static Matrix A{vector, 5, 2};
        return A;
    }

    Matrix& Matrix::operator--() {
        vector<double> vector = {1,2,3,4,5,6,7,8,9,10};   
        static Matrix A{vector, 5, 2};
        return A;
    }

    Matrix& Matrix::operator--(int) {
        vector<double> vector = {1,2,3,4,5,6,7,8,9,10};   
        static Matrix A{vector, 5, 2};
        return A;    
    }

    Matrix& Matrix::operator++() {
        vector<double> vector = {1,2,3,4,5,6,7,8,9,10};   
        static Matrix A{vector, 5, 2};
        return A;    
    }

    Matrix& Matrix::operator++(int) {
        vector<double> vector = {1,2,3,4,5,6,7,8,9,10};   
        static Matrix A{vector, 5, 2};
        return A;    
    }
    
    bool Matrix::operator==(Matrix &mat) {
        return true;
    }

    bool Matrix::operator!=(Matrix &mat) {
        return false;
    }
    
    bool Matrix::operator<( Matrix &mat) {
        return true;;
    }

    bool Matrix::operator<=( Matrix &mat) {
        return true;;
    }
    
    bool Matrix::operator>( Matrix &mat) {
        return true;
    }
    
    bool Matrix::operator>=( Matrix &mat) {
        return true;
    }
        
    std::ostream &operator<<(std::ostream &str, Matrix const &mat) {
        return str;
    }
}


