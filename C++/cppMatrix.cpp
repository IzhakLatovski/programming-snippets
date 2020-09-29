#include <iostream>
#include <string.h>

using namespace std;

class Matrix {
	private:
	    int m_rows;
	    int m_columns;
	    int m_totalSize;
	    int* m_ptValues;	    
	public:
	    Matrix(int rows, int columns);
	    ~Matrix();
	    Matrix(const Matrix& temp);
	    Matrix& operator=(const Matrix& temp);
	    int& operator()(int row, int column);
	    Matrix operator*(int scalar);
	    Matrix operator+(const Matrix& temp);	
	    Matrix operator*(const Matrix& temp);	        
	    void printMatrix();
};

Matrix::Matrix(int rows, int columns) : m_rows(rows), m_columns(columns) {
    m_totalSize = m_rows * m_columns;
    m_ptValues = new int[m_totalSize]();
}

Matrix::~Matrix() {
    if (m_ptValues) {
        delete[] m_ptValues;
    }
}

Matrix::Matrix(const Matrix& temp) : m_rows(temp.m_rows), m_columns(temp.m_columns) {
    m_totalSize = temp.m_totalSize;
    m_ptValues = new int[temp.m_totalSize]();
    memcpy(m_ptValues, temp.m_ptValues, temp.m_totalSize * sizeof(int));
}

Matrix& Matrix::operator=(const Matrix& temp) {
    if (&temp == this) {
        return *this;
    }
    if (m_totalSize == temp.m_totalSize) {
        memcpy(m_ptValues, temp.m_ptValues, temp.m_totalSize * sizeof(int));
    } else {
        delete[] m_ptValues;
        m_ptValues = new int[temp.m_totalSize]();
        memcpy(m_ptValues, temp.m_ptValues, temp.m_totalSize * sizeof(int));
    }
    m_rows = temp.m_rows;
    m_columns = temp.m_columns;
    m_totalSize = temp.m_totalSize;

    return *this;
}

int& Matrix::operator()(int row, int column) {
    if (row >= m_rows || row<0 || column >= m_columns || column<0) {
        printf("Index out of bounds");
    }
    return m_ptValues[row * m_columns + column];
}

Matrix Matrix::operator*(int scalar) {
    Matrix result(m_rows, m_columns);

    for (int i = 0; i < m_totalSize; i++) {
        result.m_ptValues[i] = m_ptValues[i] * scalar;
    }
    return result;
}

Matrix Matrix::operator+(const Matrix& temp) {
    if (m_rows != temp.m_rows || m_columns != temp.m_columns) {
        cout << "Matrix sizes are not similar" << endl;
    }
    Matrix result(m_rows, m_columns);
    for (int i = 0; i < m_totalSize; i++) {
        result.m_ptValues[i] = this->m_ptValues[i] + temp.m_ptValues[i];
    }
    return result;
}

void Matrix::printMatrix() {
    std::string delimiter = "";
    for (int i = 0; i < m_rows; i++) {
        delimiter = "";
        for (int j = 0; j < m_columns; j++) {
            cout << delimiter << m_ptValues[i * m_columns + j];
            delimiter = ",";
        }
        cout << endl;
    }
    cout << endl;
}

Matrix Matrix::operator*(const Matrix& temp) {
    if (m_columns != temp.m_rows) {
        cout<<"Matrix sizes are not similar"<<endl;
    }
    Matrix result(m_rows, temp.m_columns);
    int sum;
    for (int i = 0; i < m_rows; i++) {
        for (int j = 0; j < temp.m_columns; j++) {
            sum = 0;
            for (int k = 0; k < m_rows; k++) {
                sum += this(i, k) * temp(k,j);
            }
            result(i,j) = sum;
        }
    }
    return result;
}