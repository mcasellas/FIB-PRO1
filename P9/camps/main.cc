#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Fila;
typedef vector<Fila> Matriu;

int main() {
    int fil, col;
    cin >> fil >> col;
    
    Matriu m(fil,vector<char>(col));
    
    for (int j = 0; j < fil; ++j) {
        for (int k = 0; k < col; ++k) {
            cin >> m[j][k];
        }
    }
}
