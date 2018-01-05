#include <iostream>
using namespace std;

void pepito(int n) {
	if (n == 1) cout << '*' << endl << '*' << endl;
	else {
	for (int i = 1; i < n; ++i) {
	cout << '*' << pepito(n-1) << endl;
	}
	}
}


int main () {
	int n;
	cin >> n;
	pepito(n);
}


