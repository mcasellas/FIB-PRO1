#include <iostream>
 
using namespace std;
 
int main(){
int n;
int t = 0;
cin >> n;

	cout << "El nombre de digits de " << n;
		
		if (n == 0) {
		
		cout << " es 0" << endl;
		
		}
		
		
		else {
			
			while (n != 0) {
				
				n = n/10;
				t++;
			}
		
		cout << " es " << t << endl;
		
	}
}

