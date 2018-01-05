#include <iostream>
using namespace std;

int main () {
	int a,b,c;
	
	while (cin >> a >> b) {
	c = a;
	if (b == 0) {
		c = 1;
		}
	else {
		for (b; b > 1; --b) {
			c = c * a;
			}
	}
	cout << c << endl;
	}
}
