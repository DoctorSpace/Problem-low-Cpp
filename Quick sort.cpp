#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

/*
    Quick sort - сортировка Хоара
*/

#define ARR_SIZE 15 //константа размера массива
#define RANGE 10000 //диапозон чисел от 0 до 9999

//Функция быстрой сортировки
void quick_sort(int* sarr, int j) { //принимаемые значения sarr - массив
    
    int size = j; // размер массива и 2-ой итератор
    int k = 0; //итератор, чтобы идти с начала массива
    int c = sarr[(int)(j / 2)]; //значение центрального элемента
    int tmp = 0; //временное хранилище

    do {
        //сравнение всех элементов с центаральным, если значение
        //итератора меньше, то запускается второй цикл
        while (sarr[k] < c) k++;
        while (sarr[j] > c) j--;

        if (k <= j) { //Условие взаимного расположения 2-ух итераторов
            tmp = sarr[k];
            sarr[k] = sarr[j]; //меняем местами
            sarr[j] = tmp;
            k++;
            j--;
            }
    } while (k <= j); // Условие выхода из цикла


    if (j > 0) quick_sort(sarr, j); //запуск циклов для под массивов, для проверки размера массива
    if (size > k) quick_sort(sarr + k, size - k);
}


int main(){
    clock_t t;
    int arr[ARR_SIZE];
    srand(time(NULL));

    for (int i = 0; i < ARR_SIZE; i++)arr[i] = rand() % RANGE; //Заполнение случайными символами
    for (int i = 0; i < ARR_SIZE; i++)printf("%i element -> %i\n", i, arr[i]); //выводится в не отсортированном ввиде
    printf("\n\n\n");

    t = clock();

    quick_sort(arr, ARR_SIZE - 1); // сортируется

    t = clock() - t;
    for (int i = 0; i < ARR_SIZE; i++)printf("%i element -> %i\n", i, arr[i]); // отсортированные числа
    printf("time -> %f", (float)t / CLOCKS_PER_SEC); // выводится время за которое совершилась сортировка

    return(0);
}
