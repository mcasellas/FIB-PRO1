#include <iostream>
using namespace std;

int main () {
	int n,a=0,b=0,c=0;
	char e;
	cin >> n;
	
	for (int i = 0; i < n; ++i) {
		cin >> e;
		if (e == 'a') {
		a++;	
		}
		else if (e == 'b') {
		b++;		
		}
		else {
		c++;
		}
	}


	if (a >= b and a >= c){
		cout << "majoria de a" << endl;
		cout << a << " repeticio(ns)" << endl;
	}
	
	else if (b >= a and b >= c) {
		cout << "majoria de b" << endl;
		cout << b << " repeticio(ns)" << endl;
	}
	else {
		cout << "majoria de c" << endl;
		cout << c << " repeticio(ns)" << endl;
	}
}
	
	

