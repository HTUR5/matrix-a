
#include <iostream>
#include <vector>

using namespace std;
namespace zich {

    class Matrix {
        
        vector <vector<double>> matrix;
        int rows, cols;
    
    public:
        
        Matrix(const vector<double> &mat, int rows, int cols);

        Matrix operator-(Matrix const &mat);

        Matrix operator-();

        Matrix& operator-=(Matrix const &mat);

        Matrix operator+(Matrix const &mat);

        Matrix operator+();

        Matrix& operator+=(Matrix const &mat);

        Matrix operator*(double scalar);

        friend Matrix operator*(double const &scalar, Matrix mat);

        Matrix operator*(Matrix const &mat);

        Matrix& operator*=(Matrix const &mat);

        Matrix& operator*=(double scalar);
        
        Matrix& operator++();

        Matrix& operator++(int);

        Matrix& operator--();

        Matrix& operator--(int);

        bool operator<(Matrix  &mat);

        bool operator<=(Matrix  &mat);

        bool operator>(Matrix  &mat);

        bool operator>=(Matrix  &mat);

        bool operator!=(Matrix  &mat);

        bool operator==(Matrix  &mat);

        void print();

        friend std::ostream &operator<<(std::ostream &str, Matrix const &mat);
    };
}