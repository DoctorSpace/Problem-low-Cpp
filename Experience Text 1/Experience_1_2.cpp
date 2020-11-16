#include <iostream>

using namespace std;

/*
Необходимо перевести из системы счисления (1 < N < 10) в 10-тичную систему
*/

int main(){

	int notation = 0;  	//Система счисления
	int Number, n1, Result = 0,Power = 0;

	cin >> notation; 	//Вводим систему счисления(Пример: 2)
	cin >> Number;   	//Вводим 12 знаков (Пример: 00001111101)


	while (N > 0) {

		n1 = Number % 10;
		Number = Number / 10;

		Result = n1 * pow(notation, Power) + Result;
		Power++;
	}

	cout << Result;		//Результат (Пример: 253)
} 
