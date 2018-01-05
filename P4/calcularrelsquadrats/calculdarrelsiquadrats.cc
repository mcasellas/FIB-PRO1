#include <iostream>
#include <cmath>
using namespace std;



int main () {
	cout.setf(ios::fixed);
	cout.precision(6);
	int ent;

		while (cin >> ent) {
		cout << (int) pow (ent,2) << " " << (double) sqrt(ent) << endl;
		}

}
