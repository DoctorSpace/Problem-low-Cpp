#include <iostream>

using namespace std;

//Задание: Написать программу, в которую пользователь вводит две даты в формате
//dd.mm.yyyy, а она отображает большую из них.

int main(){
	setlocale(LC_ALL, "Russian");

	char data1[11], data2[11];

	cout << "Введите первую дату: ";
	cin >> data1;

	cout << "Введите вторую дату: ";
	cin >> data2;
//Поиск по году
	for (int i = 0; i < 3; i++) {
		if (data1[i + 6] < data2[i + 6]){
			cout << data1 << " <- Самый сарый";
			exit(0);
			}
	}
//Поиск по месяцу
	for (int i = 0; i < 2; i++) {
		if (data1[i + 4] < data2[i + 6]) {
			cout << data1 << " <- Самый сарый";
			exit(0);
		}
	}
//Поиск по дню
	for (int i = 0; i < 2; i++) {
		if (data1[i] < data2[i + 6]) {
			cout << data1 << " <- Самый сарый";
			exit(0);
		}
	}
}