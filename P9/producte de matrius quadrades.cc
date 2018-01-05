#include <iostream>
#include <vector>
using namespace std;


typedef vector< vector<int> > Matriu;
 	
Matriu producte(const Matriu& a, const Matriu& b){
    int tamany = a.size();
    Matriu c(a.size(),vector<int>(tamany));

    for (int i = 0; i < tamany; ++i) {
        for (int j = 0; j < tamany; ++j){
            c[i][j] = a[i][j] * b[i][j];
        }
    }

    return c;
}

void printMatrix(Matriu m){
	for (int i = 0; i < int(m.size()); ++i){
		for(int j = 0; j < int(m[0].size()); ++j){
			cout << m[i][j] << ' ';
		}
		cout << endl;
	}
}
   
int main (){ 
    int f,c;
    cin >> f >> c;
   
    Matriu hola(f,vector<int> (c));
   
    for (int i = 0; i < f; ++i){
        for (int j = 0; j < c; ++j){
            cin >> hola[i][j];
        }
    }
    
    
    Matriu hola2(f,vector<int> (c));
   
    for (int i = 0; i < f; ++i){
        for (int j = 0; j < c; ++j){
            cin >> hola2[i][j];
        }
    }
    
    printMatrix(producte(hola,hola2));
}




