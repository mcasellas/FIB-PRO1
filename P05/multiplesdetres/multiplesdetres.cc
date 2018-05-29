#include <iostream>
using namespace std;

int suma_digits(int x){
	if (x < 10) return x;
	else return x%10 + suma_digits(x/10);
}

bool es_multiple_3(int n){
	if (suma_digits(n)%3 == 0) return true;
	else return false;
}

int main () {
	int n;
	cin >> n;
	cout << es_multiple_3(n) << endl;
}

