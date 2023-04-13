#include <iostream>
#include <conio.h>
using namespace std;
void addition();
void subtraction();
void multiply();
void scaler();
void identity();
void transpose();
void diagonal();
void symetric();
main()
{
    system("cls");
    int option;
    cout << "Which operation you want to perfome " << endl;
    cout << "1- Addition" << endl;
    cout << "2- Subraction" << endl;
    cout << "3- Multiplication" << endl;
    cout << "4- Scaler multiply" << endl;
    cout << "5- identity matrix" << endl;
    cout << "6- transpose" << endl;
    cout << "7- diagonal" << endl;
    cout << "8- symmetric" << endl;
    cout << "\n";
    cout << "Enter your option ";
    cin >> option;
    if (option == 1)
    {
        system("cls");
        addition();
    }
    else if (option == 2)
    {
        system("cls");
        subtraction();
    }
    else if(option==3)
    {
        system("cls");
        multiply();
    }
    else if(option==4)
    {
        system("cls");
        scaler();
    }
    else if(option==5)
    {
        system("cls");
        identity();
    }
    else if(option==6)
    {
        system("cls");
        transpose();
    }
    else if(option==7)
    {
        system("cls");
        diagonal();
    }
    else if(option==8)
    {
        system("cls");
        symetric();
    }
    else
    {
        cout << "Invalid Option";
    }
}
void addition()
{
    int size1, size2, sum;
    cout << "Enter size of matrix one ";
    cin >> size1;
    cout << "Enter size of matrix two ";
    cin >> size2;
    if (size1 != size2)
    {
        cout << "Not valid for any operation";
    }
    else
    {
        int matrix[size1][size1];
        int matrix_two[size2][size2];
        cout << "\n\n";
        cout << "--------- Matrix One------------" << endl;
        cout << "Enter matrix one " << endl;
        for (int i = 0; i < size1; i++)
        {
            for (int j = 0; j < size1; j++)
            {
                cin >> matrix[i][j];
            }
        }
        cout << "\n";
        cout << "----------Matrix Two-------------" << endl;
        cout << "Enter matrix two " << endl;
        for (int i = 0; i < size2; i++)
        {
            for (int j = 0; j < size2; j++)
            {
                cin >> matrix_two[i][j];
            }
        }
        cout << "\n";
        cout << "----------- Sum of matrices are ----------" << endl;
        for (int i = 0; i < size1; i++)
        {
            for (int j = 0; j < size2; j++)
            {
                sum = matrix[i][j] + matrix_two[i][j];
                cout << sum << " " << endl;
            }
        }
    }
}

void subtraction()
{
    int size1, size2, sub;
    cout << "Enter size of matrix one ";
    cin >> size1;
    cout << "Enter size of matrix two ";
    cin >> size2;
    if (size1 != size2)
    {
        cout << "Not valid for any operation";
    }
    else
    {
        int matrix[size1][size1];
        int matrix_two[size2][size2];
        cout << "\n\n";
        cout << "--------- Matrix One------------" << endl;
        cout << "Enter matrix one " << endl;
        for (int i = 0; i < size1; i++)
        {
            for (int j = 0; j < size1; j++)
            {
                cin >> matrix[i][j];
            }
        }
        cout << "\n";
        cout << "----------Matrix Two-------------" << endl;
        cout << "Enter matrix two " << endl;
        for (int i = 0; i < size2; i++)
        {
            for (int j = 0; j < size2; j++)
            {
                cin >> matrix_two[i][j];
            }
        }
        cout << "\n";
        cout << "----------- Subtraction of matrices are ----------" << endl;
        for (int i = 0; i < size1; i++)
        {
            for (int j = 0; j < size2; j++)
            {
                sub = matrix[i][j] - matrix_two[i][j];
                cout <<sub << " " << endl;
            }
        }
    }
}

void multiply()
{
    int size1, size2, mul;
    cout << "Enter size of matrix one ";
    cin >> size1;
    cout << "Enter size of matrix two ";
    cin >> size2;
    if (size1 != size2)
    {
        cout << "Not valid for any operation";
    }
    else
    {
        int matrix[size1][size1];
        int matrix_two[size2][size2];
        cout << "\n\n";
        cout << "--------- Matrix One------------" << endl;
        cout << "Enter matrix one " << endl;
        for (int i = 0; i < size1; i++)
        {
            for (int j = 0; j < size1; j++)
            {
                cin >> matrix[i][j];
            }
        }
        cout << "\n";
        cout << "----------Matrix Two-------------" << endl;
        cout << "Enter matrix two " << endl;
        for (int i = 0; i < size2; i++)
        {
            for (int j = 0; j < size2; j++)
            {
                cin >> matrix_two[i][j];
            }
        }
        cout << "\n";
        cout << "----------- Multiplied matrices are ----------" << endl;
        for (int i = 0; i < size1; i++)
        {
            for (int j = 0; j < size2; j++)
            {
                mul = (matrix[i][j]*matrix_two[i][j])+(matrix[i][j]*matrix_two[i+1][j]);
                cout << mul << " " << endl;
            }
        }
    }
}

void scaler()
{
    int value,s;
    int size;
    cout << "Enter a value ";
    cin >> value;
    cout << "Enter size of matrix one ";
    cin >> size;
    int matrix[size][size];
    cout << "Enter matrix one " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "\n";
    cout << "----------- scaler matrix is ----------" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            s = value * matrix[i][j];
            cout << s << endl;
        }
    }
}

void identity()
{
    int size;
    cout << "Enter size of matrix ";
    cin >> size;
    int matrix[size][size];
    cout << "Enter matrix " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "\n";
    cout << "----------- Identity------------" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(matrix[i][j]==matrix[i+1][j+1])
            {

               if(matrix[i][j]==1 && matrix[i+1][j+1]==1)
               {
                   if(matrix[i][j]==0)
                   {
                       cout << "Identity";
                   }
               }
            }
        }
    }
}
void transpose()
{
    int row,col;
    cout << "Enter row size of matrix ";
    cin >> row;
    cout << "Enter column size of matrix ";
    cin >> col;
    int matrix[row][col];
    cout << "Enter matrix " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "\n";
    cout << "----------- Transpose ------------" << endl;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << matrix[j][i] << " ";
        }
    }
}

void diagonal()
{
    int size;
    cout << "Enter size of matrix ";
    cin >> size;
    int matrix[size][size];
    cout << "Enter matrix " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "\n";
    cout << "----------- Diagonal ------------" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {

                if (matrix[i][j]!=0 && matrix[i + 1][j + 1]!=0)
                {
                    cout << "Diagonal";
                    break;
                }
                else
                {
                    cout << "Not diagonal";
                    break;
                }
        }
        break;
    }
}

void symetric()
{
    int row, col,m;
    cout << "Enter row size of matrix ";
    cin >> row;
    cout << "Enter column size of matrix ";
    cin >> col;
    int matrix[row][col];
    cout << "Enter matrix " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "\n";
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            m = matrix[j][i];
            cout << m << " ";
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           if(m==matrix[i][j])
           {
               cout << "Symmetric";
               break;
           }
           else
           {
               cout <<"\nNot symmetric";
               break;
           }
        }
        break;
    }
}