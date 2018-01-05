#include <iostream>
using namespace std;

int main () {
  cout.setf(ios::fixed);
  cout.precision(4);
  
  double equivalencia, entrada, sortidaeur, sortidausd;
  string unitats;
  
  cin >> equivalencia;
  
  while (cin >> entrada >> unitats) {
	if (unitats == "USD") {
		sortidausd += entrada;
		sortidaeur += entrada/equivalencia;
		}
	else {
		sortidaeur += entrada;
		sortidausd += entrada*equivalencia;
		}	
  }
  
  cout << sortidaeur << " " << sortidausd << endl; 
}
