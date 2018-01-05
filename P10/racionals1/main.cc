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

void llegeix_racional(Racional& r, bool& final){
    
}
 

int main () {
}

