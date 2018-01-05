#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;


Matriu producte(const Matriu& a, Matriu& b) {
        int tam = a.size();
        Matriu Producte(tam, vector<int>(tam));
        for (int i = 0; i < tam; ++i) {
                for (int j = 0; j < tam; ++j) {
                        int aux = 0;
                        for (int k = 0; k < tam; ++k) {
                                aux += a[i][k] * b[k][j];
                        }
                        Producte[i][j] = aux;
                }
        }
        return Producte;
}


   
int main (){ 
    
}
