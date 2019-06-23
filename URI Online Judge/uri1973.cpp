#include <iostream>
using namespace std;
#define SIZE 1000001

int main () {

	//1000001
	long long n, *estr, estrPos = 0, tempQtd;
	bool *visit;
	estr = new long long [SIZE];
	visit = new bool [SIZE];
	long long ovQtd = 0, total = 0, estrPass = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> estr[i];
		total += estr[i];
	}

	while (true) {
		tempQtd = estr[estrPos];
		if (tempQtd > 0) {
			if (!visit[estrPos]) {
				ovQtd++;
				estr[estrPos] -= 1;
				visit[estrPos] = true;
			}

			estrPass++;
		}

		estrPos += (tempQtd % 2 == 0) ? - 1 : 1;

		if (estrPos < 0 || estrPos >= n) {
			break;
		}
	}

	cout << ovQtd << " " << (total - estrPass) << endl;

	return 0;
}