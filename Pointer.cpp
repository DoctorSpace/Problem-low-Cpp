#include <iostream>

using namespace std;

// Указатели


// для 3-его примера (1)
void Foo1(int a) {
    a++;        // 1
}

// для 3-его примера (2)
void Foo2(int *px) {    // Функция void а всё равно отдаёт 1-у из-за указателя

    // px = 00F1FD24

    (*px)++;        // работа с числом      // 1        (*px) <- операция разъименовании
    px++;           // смещение в памяти    // 00F1FD28
}






int main(){

    setlocale(LC_ALL, "ru");


// Пример 1
    /*
    int a = 5;
    int *px = &a;     // & - амперсант для работы с числом

    cout << "a \t"     << a    << endl; // 5
    cout << "px \t"    << px   << endl; // 00F1FD28
    cout << "*px \t"   << *px  << endl; // 5

    *px = 2;

    cout << "----------------------" << endl;
    cout << "a \t"     << a    << endl; // 2
    cout << "*px \t"   << *px  << endl; // 2
    */

// Пример 2
    /*
    const int SIZE = 5;

    int arr[SIZE]{ 1,55,4,2,18 };

    for (int i = 0; i < SIZE; i++) {

        cout << arr[i] << endl;         // 1,55,4,2,18

    }

    int* pArr = arr;

    cout << "----------------------" << endl;

    // указывают на 16-й код первого элемента
    cout << arr     << endl;        // 010FF9BC 
    cout << pArr    << endl;        // 010FF9BC

    // указывают на первый элимент
    cout << *arr    << endl;        // 1
    cout << *pArr   << endl;        // 1

    cout << "----------------------" << endl;

    for (int i = 0; i < SIZE; i++) {
        
        cout << *(pArr+i) << endl;         // 1,55,4,2,18

    }

    cout << "----------------------" << endl;

    for (int i = 0; i < SIZE; i++) {

        cout << pArr[i] << endl;         // 1,55,4,2,18

    }

    cout << "----------------------" << endl;

    for (int i = 0; i < SIZE; i++) {

        cout << pArr + i << endl;         // 010FF9BC, 010FF9C0, 010FF9C4, 010FF9C8, 010FF9CC
     
    }
    */

//Пример 3
    /*
    //пример (1)
    int a = 0;
    cout <<"Дано: "<< a << endl;    // 0

    Foo1(a);
    cout << "Foo1 = " << a << endl; // 0
    
    //пример (2)
    Foo2(&a); // надо задавать указатель с амперсантом &
    cout << "Foo2 = " << a << endl; // 1
    */
}
