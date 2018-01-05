#include <iostream>
 
using namespace std;
 
int main(){
cout.setf(ios::fixed); 
cout.precision(4);
 

double n;
double r = 0;
cin >> n;

	
	while (n != 0) {
			r = r+(1/n);
			n--;
	}
	
	cout << r << endl;
				
	

}
