#include <iostream>

using namespace std;

/*
Условие: необходимо найти числа которые входят в промежуток от A и до B (но сами не учитываются),
и притом могут делиться на 3 и на 2 или только на 3 или 5, но никак не могут если есть 2 и 5.
*/

int main() {

	int count, app = 0;
	
	int A, B;
	cin >> A >> B;

	A++;
	B--;

	while (A <= B) {
		if (A % 5 != 0 or A % 2 != 0) {
			if (A % 3 == 0 and A % 5 == 0) {
				app++;
			}
			if (A % 3 == 0 and A % 2 == 0) {
				app++;
			}
		}
		A++;
	}
	cout << app;
} 
