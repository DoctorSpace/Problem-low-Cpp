#include <iostream>

using namespace std;

/*

Дырка в обоях

дырка на стене имеет форму прямоугольника со сторонами длиной A и B. Помогите студентам определить, подойдет ли прямоугольный кусок обоев размерами X x Y чтобы заклеить эту дырку.

*/


int main(){

	const int n = 4;
	int A[n];

	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}


	int max, min;
	if (A[2] > A[3]) {
		max = A[2];
		min = A[3];
	}
	else if(A[2] == A[3]) {
		max = A[2];
		min = A[3];
	}
	else {
		max = A[3];
		min = A[2];
	}


	if (max >= A[0] and max >= A[1]) {
		if (min >= A[0] or min >= A[1]) {
			cout << "YES";
		}
	}
	else {
		cout << "NO";
	}
} 