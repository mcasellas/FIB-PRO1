#include <iostream>
using namespace std;

int main () {
	cout.setf(ios::fixed);
	cout.precision(2);
	
	double m,n,a,l,b,s;
	cin >> m;
	l = m;
	while (m != 0) {
	cin >> n;
	a = a + n*n;
	b = b + n;
	--m;
	}
		s = ((1/(l-1))*a)-(1/(l*(l-1)))*(b*b);
	cout << s << endl;
	
}
