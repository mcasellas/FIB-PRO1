#include <iostream>
#include <string>
using namespace std;

int main () {
	int n;
	
    while (cin >> n) {
        int c = 1;
        if (n < 10){
			cout << "El producte dels digits de " << n << " es " << n << "." << endl;
		}
        else {
            while (n >= 10) {
                int d = n;
                while (n > 0) {  
                    c= c * (n % 10);
                    n = n/10;
                }
                cout << "El producte dels digits de " << d << " es " << c << "." << endl;
                n = c;
                c = 1;
            }
        }
        cout << "----------" << endl;
    }
}
	
