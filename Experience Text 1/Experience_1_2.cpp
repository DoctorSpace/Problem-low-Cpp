#include <iostream>

using namespace std;



int main(){


	int M = 0, L = 0; // степень
	int N, n1, P = 0;

	cin >> M;
	cin >> N;


	while (N > 0) {

		n1 = N % 10;
		N = N / 10;

		P = n1 * pow(M, L) + P;
		L++;
	}

	cout << P;
} 
