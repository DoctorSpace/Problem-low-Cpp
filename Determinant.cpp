#include <iostream>

using namespace std;

/*
Напишите программу, считающую определитель для матрицы 3x3.
*/

int main()
{
    setlocale(LC_ALL, "Russian");

    int matrix[3][3];

//ввод данных в матрицу.
    for (int i = 0; i < 3; i++) {
        for (int j = 0;  j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << endl << "Матрица имеет вид: " << endl;
//ввыд данных в матрицы.
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t";
            if (j == 2) {
                cout << endl;
            }  
        }
    }

    cout << endl;
//нахождение определителя.
    int opp;

    opp = ((matrix[0][0] * matrix[1][1] * matrix[2][2]) + (matrix[0][1] * matrix[1][2] * matrix[2][0]) + (matrix[1][0] * matrix[2][1] * matrix[0][2]))
        - ((matrix[2][0] * matrix[1][1] * matrix[0][2]) + (matrix[2][1] * matrix[1][2] * matrix[0][0]) + (matrix[1][0] * matrix[0][1] * matrix[2][26]));
    
    cout << "Определитель матрицы равен " << opp << endl;
}