#include <iostream>
#include <vector>
using namespace std;

typedef vector<string> Fila;
typedef vector<Fila> Matriu;



int nombre_de_paraules(const Matriu& m, char c, int k){
    int files = m.size();
    int suma = 0;
    for (int i = 0; i < files; ++i) {
        int colum = m[i].size();
        for (int j = 0; j < colum; ++j) {
            int l = m[i][j].length();
            if (k < l and m[i][j][k] == c) ++suma;
        }
    }
    return suma;
}

int main() {
}
