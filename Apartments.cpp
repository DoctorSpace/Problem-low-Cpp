#include <iostream>

/*
В 9 - ти этажном доме 3 подъезда.
В первом подъезде дома по 4 квартиры на этаже, 
во втором по 3 квартиры на этаже, 
в третьем по 2 квартиры на этаже.
По введенному пользователем номеру квартиры отобразить номер подъезда 
и этажа или сообщение об ошибке(если такого номера не существует).
*/

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int floor = 9, apartments1 = 4, apartments2 = 3, apartments3 = 2, number;

    cout << "Введите номер квартиры от 1 до 81: ";
    cin >> number;

    if (number == 0 or number > 81) {
        cout << "Нету такого этажа!";
        exit(0);
    }
//1-ый подъезд
    if (number <= 36) {
        cout << endl <<"Подъезд номер 1" << endl;
        for (int i = 0; i < 10; i++) {
            if (number <= i * apartments1) {
                cout << "Этаж номер " << i << endl;
                break;
            }
        }
    }
//2-ой подъезд
    if (number > 36 and number <= 63) {
        cout << endl << "Подъезд номер 2" << endl;
        for (int i = 0; i < 10; i++) {
            if ((number-36) <= i * apartments2) {
                cout << "Этаж номер " << i << endl;
                break;
            }
        }
    }
//3-ий подъезд
    if (number > 63) {
        cout << endl << "Подъезд номер 3" << endl;
        for (int i = 0; i < 10; i++) {
            if ((number - 63) <= i * apartments3) {
                cout << "Этаж номер " << i << endl;
                break;
            }
        }
    }


}