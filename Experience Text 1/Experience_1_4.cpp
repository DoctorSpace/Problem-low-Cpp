#include <iostream>

using namespace std;

int main() {

	int count, app = 0;
	const int n = 2;
	int A[n];

	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	A[0]++;
	A[1]--;

	while (A[0] <= A[1]) {
		if (A[0] % 5 != 0 or A[0] % 2 != 0) {

			if (A[0] % 3 == 0 and A[0] % 5 == 0) {
				app++;
			}

			if (A[0] % 3 == 0 and A[0] % 2 == 0) {
				app++;
			}
		}

		A[0]++;
	}

	cout << app;

} 