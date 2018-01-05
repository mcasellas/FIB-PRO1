
#include <iostream>
using namespace std;

int main(){
    int n,contador = 1;
    bool trobat = false;
    cin >> n;
    
    while (n != -1 and trobat == false) {
        int valor;
        cin >> valor;
        if (contador == n){
            cout << "A la posicio " << n << " hi ha un "
            << valor << '.'<< endl;
            trobat = true;
        }
        else ++contador;
    }
}
