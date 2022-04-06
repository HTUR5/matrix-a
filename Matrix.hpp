
#include <iostream>
#include <vector>

using namespace std;
namespace zich {

    class Matrix {
        
        vector <vector<double>> matrix;
        int rows, cols;
    
    public:
        
        Matrix(const vector<double> &numbers, int n, int m);
        
        Matrix operator+(Matrix const &B);

        Matrix& operator+=(Matrix const &B);

        Matrix operator+();

        Matrix operator-(Matrix const &B);

        Matrix& operator-=(Matrix const &B);

        Matrix operator-();

        Matrix operator*(double scalar);

        friend Matrix operator*(double const &scalar, Matrix other);

        Matrix operator*(Matrix const &B);

        Matrix& operator*=(Matrix const &B);

        Matrix& operator*=(double scalar);

        Matrix& operator++();

        Matrix& operator--();

        Matrix& operator++(int);

        Matrix& operator--(int);

        bool operator<(Matrix  &B);

        bool operator>(Matrix  &B);

        bool operator<=(Matrix  &B);

        bool operator>=(Matrix  &B);

        bool operator==(Matrix  &B);

        bool operator!=(Matrix  &B);

        void print();

        friend std::ostream &operator<<(std::ostream &o, Matrix const &m);
    };
}