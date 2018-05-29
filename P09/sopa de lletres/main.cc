#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Fila;
typedef vector<Fila> Matriu;

int main() {
    int np, fil, col;
    cin >> np >> fil >> col;
    vector <string> pepito (np);
    
    for (int i = 0; i < np; ++i) {
        cin >> pepito[i];
    }
    
    Matriu m(fil,vector<char>(col));
    
    for (int j = 0; j < fil; ++j) {
        for (int k = 0; k < col; ++k) {
            cin >> m[j][k];
        }
    }
    cout << endl;
    
    
}
