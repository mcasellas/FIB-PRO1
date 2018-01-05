#include <iostream>
#include <cmath>
using namespace std;



int main () {
	cout.setf(ios::fixed);
	cout.precision(6);
	double angle;

		while (cin >> angle) {
		cout << sin (angle*M_PI/180) << " " << cos (angle*M_PI/180) << endl;
		}

}
