#include <iostream>
#include <vector>
using namespace std;

int mcd(int a, int b) {
    if (b != 0) return mcd(b,a%b);
    else return a;
}

struct Racional { 
    int num, den;
};

Racional racional(int n, int d){
    Racional pepito;
    int maxcd = 1;
    
    if(n != 0) maxcd = mcd(n,d);
    
    n = n / maxcd;
    d = d / maxcd;
    
    if (n == 0) d = 1;
    
    if (d < 0) {
        d *= -1;
        n *= -1;
    }
    
    pepito.num = n;
    pepito.den = d;
    return pepito;
}

Racional suma(const Racional& a, const Racional& b);
Racional resta(const Racional& a, const Racional& b);
Racional producte(const Racional& a, const Racional& b);
Racional divisio(const Racional& a, const Racional& b);

void suma_un(Racional& r) {

1 1 = 3
2 1 = 2

}

int main () {
}

