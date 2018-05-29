#include <iostream>
using namespace std;

int main () {
	int a,b,c;
	
	while (cin >> a >> b) {
		c = 0;
		while (b > 0) {
			b = b/a;
			c++;
		}
	cout << c << endl;
	}
	
}
