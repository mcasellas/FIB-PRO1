#include <iostream>
using namespace std;

int main () {
	int x, v, f=0;
	
	cin >> v;
	
	while (cin >> x) {
	if (x%v == 0) {
	++f;
	}
	}
	cout << f << endl;
}
