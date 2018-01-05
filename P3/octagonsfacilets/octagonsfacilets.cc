#include <iostream>
using namespace std;

int main () {
	int n,mig,fi,k,espai;
	
	
	while (cin >> n) {
	
	espai = n-1;
	
	k = n-1;
	mig = n;
	fi = n;
	while (k > 0) {
		
		
		for (int i=0; i < espai; ++i) {
			cout << ' ';
		}
		--espai;
		for (int j=0; j < n; ++j) {
			cout << "X";
		}
		n = n + 2;
		cout << endl;
		--k;
	}
	for (mig; mig > 0; --mig) {
	for (int j=0; j < n; ++j) {
			cout << "X";
		}
		cout << endl;
	}
	espai = 1;
	n = n-2;
	while (fi > 1) {
		for (int i=0; i < espai; ++i) {
			cout << ' ';
		}
		++espai;
		for (int j=0; j < n; ++j) {
			cout << "X";
		}
		n = n - 2;
		cout << endl;
		--fi;
	}
	
	cout << endl;
}	
}
	
