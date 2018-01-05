#include <iostream>
using namespace std;

bool es_creixent(int n){
	if (n < 10) return true;
	else {
		int v1,v2;
		v1 = n%10;
		n /= 10;
		v2 = n%10;
		if (v1 >= v2) return es_creixent(n);
		else return false;
	}
	
}

int main () {
	int n;
	cin >> n;
	cout << es_creixent(n) << endl;
}
