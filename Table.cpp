#include <iostream>
#include <windows.h>

using namespace std;

/*
Написать программу, которая вводит данные 5 сотрудников(фамилию сотрудника, его возраст, заработную плату)
и отображает их на экране в виде таблицы, и отображает итоги : количество сотрудников, средний возраст, 
среднюю заработную плату.
*/

struct WORKER {
    char name[15];
    int age, prise;
};

void Input(WORKER* x);
void Output(WORKER* x);

int main(int argc, char* argv[]) {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    WORKER work[5], * ptr;
    Input(work);
    system("cls");
    Output(work);
}

void Input(WORKER* x)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        cout << "\tВвод " << i + 1 << " рабочего" << endl;
        cout << "Введите имя рабочего : ";
        cin >> x[i].name;
        cout << "Введите возраст : ";
        cin >> x[i].age;
        cout << "Введите зарплату : ";
        cin >> x[i].prise;
        cout << endl;
    }
}

void Output(WORKER* x) {
    cout << "\t\tВывод участников: " << endl << endl;
    int s_age = 0, s_prise = 0, num = 0;
    for (int i = 0; i < 5; i++) {
        cout << x[i].name << "\t" << x[i].age << "\t" << x[i].prise << endl;
        num++;
        s_age += x[i].age;
        s_prise += x[i].prise;
    }

    cout << endl << endl
         <<"Количество рабочих: " << num << endl 
         <<"Средний возраст рабочих: "<<s_age / num << endl
         <<"Средняя зарплата: "<< s_prise / num << endl;
}