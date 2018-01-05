#include <iostream>
using namespace std;

int factorial(int n) {
	int i = 0;
	int f = 1;
	while (i < n) {
	i = i + 1;
	f *= i;
	}
	return f;
} 

int maxim(int x, int y, int z) {
	if (factorial(x) >= factorial(y)) {
		if (x >= z) return factorial(x);
		else return factorial(z);
	}
	else if (factorial(y) >= factorial(z)) return factorial(y);
	else return factorial(z);
}

int main() {
int x,y,z;
cin >> x >> y >> z;

cout << maxim(x,y,z) << endl;
}
