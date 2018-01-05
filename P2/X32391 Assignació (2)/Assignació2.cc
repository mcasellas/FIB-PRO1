#include <iostream>
using namespace std;

int main () {
	int d,n,t,a,s;
	cin >> d >> n >> t;
	
	for (int i = 0; i < t; ++i) {
		cin >> a;
		n = n-d+a;
		if (n > 0) {
			++s;	
		}
	}
	
	cout << s << endl;
}
