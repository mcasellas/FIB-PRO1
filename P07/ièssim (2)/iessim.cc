
#include <iostream>
using namespace std;

int main(){
    int n,contador = 1,valor;
    bool trobat = false;
    cin >> n;
    cin >> valor;
    while (valor != -1 and !trobat) {
        if (contador == n){
            cout << "A la posicio " << n << " hi ha un "
            << valor << '.'<< endl;
            trobat = true;
        }
        else ++contador;
        cin >> valor;
    }
    if (!trobat) cout << "Posicio incorrecta." << endl; 
}
