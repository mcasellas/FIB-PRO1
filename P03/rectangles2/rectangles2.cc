#include <iostream>
#include <string>
using namespace std;

int main () {
	int n,m,val = 9;
	bool cond = false;
	
	
	while (cin >> n >> m) {
		if (cond == true) {
		cout << endl;
		}
		cond = true;
	for (int j=0; j < n; ++j) {
		for (int i=0; i < m; ++i) {
			cout << val;
			--val;
			if (val == -1) {
			val = 9;
			}
		}
		cout << endl;
		
	}
	val = 9;
	}
}
