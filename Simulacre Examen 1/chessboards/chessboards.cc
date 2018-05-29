#include <iostream>
using namespace std;

int main () {
  int ent;
  
  while (cin >> ent) {
  for (int i = 1; i <= ent; i++) {
	for (int j = 1; j <= ent; j++){
		if (i%2 != 0) {
			if (j%2 != 0) {
				cout << ".";
			}
			else {
				cout << "x";
			}
		}
		if (i%2 == 0) {
			if (j%2 != 0) {
				cout << "x";
			}
			else {
				cout << ".";
			}
		}
		
	}
	cout << endl;
  }
  cout << endl;
}

}
