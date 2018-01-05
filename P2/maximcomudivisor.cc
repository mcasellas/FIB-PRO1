#include <iostream>
 
using namespace std;
 
int main(){
int a,b,c;
cin >> a >> b;

	cout << "El mcd de " << a << " i " << b;
	
	if (b > a) {
	c = a;
	a = b;
	b = c;
	}
	
	while (b){
		c = a%b;
		a = b;
		b = c;
}
cout << " es " << a << "." << endl;
}

