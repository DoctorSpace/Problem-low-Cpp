#include <iostream>

//Для заданных пользователем трех целых чисел n, m, k определить какое их них
//является средним по значению и вывести это значение на экран.
//Если среди введенных чисел есть равные – вывести сообщение об ошибке.


using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");

    int mas[3], n = 0;

    for (int i = 0; i < 3; i++) {
        cout << "Введите " << i+1 << " число: ";
        cin >> mas[i];
    }

//нахождение ошибки
    if (mas[0] == mas[1] or mas[1] == mas[2] or mas[0] == mas[2]) {
        cout << "Ошибка, не одно среднее число!";
        exit(0);
    }

//нахождение минимального числа
    int max = 0, min = 9;
    for (int i = 0; i < 3; i++) {
        n = mas[i];
        if (n > max) {
            max == n;
        }
        if (n < min) {
            min == n;
        }
    }

//нахождение среднего числа
    for (int i = 0; i < 3; i++) {
        if (mas[i] != max and mas[i] != min) {
            cout << "Среднее число равно: "<< mas[i];
            break;
        }
    }
}
