// Create a class called 'Matrix' containing constructor that
// initializes the number of rows and the number of columns of a new Matrix object.

// The Matrix class has the following information:
// 1 - number of rows of matrix
// 2 - number of columns of matrix
// 3 - elements of matrix (You can use 2D vector)

// The Matrix class has functions for each of the following:
// 1 - get the number of rows
// 2 - get the number of columns
// 3 - set the elements of the matrix at a given position (i,j)
// 4 - adding two matrices.
// 5 - multiplying the two matrices

// You can assume that the dimensions are correct for the multiplication and addition.

#include<iostream>
using namespace std;

class Matrix
{
    public:

        int matrix[10][10] = {0};
        int rows, columns;

        Matrix(int i, int j)
        {
            rows = i;
            columns = j;
        }
        
        void initialize_matrix()
        {
            cout << "Enter your matrix..." << endl;
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < columns; j++)
                {
                    cout << "Enter the a" << i + 1 << j + 1 << " element of the matrix: ";
                    cin >> matrix[i][j];
                }                
            }            
        }

        void display_matrix()
        {
            cout << "Your matrix is the following..." << endl;
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < columns; j++)
                {
                    cout << matrix[i][j] << " ";
                }    
                cout << endl;            
            }            
        }

        int get_rows()
        {
            return rows;
        }

        int get_columns()
        {
            return columns;
        }

        void set_element(int i, int j, int value)
        {
            matrix[i][j] = value;
            cout << "Changes made successfully." << endl;
        }

        Matrix add_matrix(Matrix m2)
        {
            Matrix added_matrix(rows, columns);
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < columns; j++)
                {
                    added_matrix.matrix[i][j] = matrix[i][j] + m2.matrix[i][j];
                }                
            }
            cout << "Matrix added successfully" << endl;
            return added_matrix;   
        }

        Matrix multiply_matrix(Matrix m2)
        {
            Matrix multiplied_matrix(rows, m2.columns);
            for(int i = 0; i < rows; i++)
            {
                for(int j = 0; j < m2.columns; j++)
                {
                    for(int k = 0; k < columns; k++)
                    {
                        multiplied_matrix.matrix[i][j] = multiplied_matrix.matrix[i][j] + (matrix[i][k] * m2.matrix[k][j]);
                    }
                }
            }
             cout << "Matrix multiplied successfully" << endl;
            return multiplied_matrix;
        }
};

int main()
{
    Matrix m1(2, 2), m2(2, 2);
    
    m1.initialize_matrix();
    m2.initialize_matrix();

    m1.display_matrix();
    m2.display_matrix();

    m1.set_element(1, 0, 4);
    m2.set_element(0, 1, 5);

    m1.display_matrix();
    m2.display_matrix();

    Matrix a = m1.add_matrix(m2);
    a.display_matrix();

    Matrix b = m1.multiply_matrix(m2);
    b.display_matrix();
}