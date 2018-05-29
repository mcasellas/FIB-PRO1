#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Quadrat;
 	
Matriu producte(const Matriu& a, const Matriu& b) {
        int filesa = a.size();
        int filesb = b.size(); // = columnesA
        int colub = b[0].size();
        
        
        Matriu producte(filesa, vector<int>(colub,0));
        for (int i = 0; i < filesa; ++i) {
                for (int j = 0; j < colub; ++j) {
                        int aux = 0;
                        for (int k = 0; k < filesb; ++k) {
                            aux += a[i][k] * b[k][j];
                        }
                        producte[i][j] = aux;
                }
        }
        return producte;
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
    
       cin >> f >> c;
    Matriu hola2(f,vector<int> (c));
   
    for (int i = 0; i < f; ++i){
        for (int j = 0; j < c; ++j){
            cin >> hola2[i][j];
        }
    }
    
    printMatrix(producte(hola,hola2));
}


