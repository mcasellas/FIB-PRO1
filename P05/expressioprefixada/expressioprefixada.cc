#include <iostream>
using namespace std;

int operacions() { 
	char ent;
	cin >> ent;

	if (ent >= '0' and ent <= '9') return ent - '0';
	else {
		int v1 = operacions();
		int v2 = operacions();
		
		if (ent == '+') return v1+v2;
		else if (ent == '-') return v1-v2;
		else return v1*v2;
	}
}

int main () {
		cout << operacions() << endl;
}
