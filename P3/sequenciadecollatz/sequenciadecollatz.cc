#include <iostream>
#include <string>
using namespace std;

int main () {
	int n,c;
	while (cin >> n) {
		while (n != 1) {
			if (n%2 == 0) {
				n = n/2;
			}
			
			else {
			n = (n * 3) + 1;
			}
			c++;
		}
		cout << c << endl;
		n = 0;
		c = 0;
	}
	
	
	
	
}
