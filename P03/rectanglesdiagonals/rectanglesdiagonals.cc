#include <iostream>
using namespace std;

int main () {
	int f,c,out=0,fil;

	cin >> f >> c;


	for (int j; j < c; j++) {
		cout << out;
		if (out == 9) {
			out= -1;
		}
		out++;
	}
	cout << endl;


	for (int fil = 1; fil < f; fil++ ) {

		for (int j = fil; j > 0; j--) {
			cout << j;
		}
		for (int j = fil; j > 0; j++) {
			cout << j;
		}
		cout << endl;

	}

}

