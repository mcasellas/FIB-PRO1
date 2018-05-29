#include <iostream>
using namespace std;

int mcd2(int a, int b){

    if (b > a) {
        int aux = a;
        a = b;
        b = aux;
    }

    int resultat;

    while (b != 0){
        resultat = a%b;
        a = b;
        b = resultat;
    }

    return a;
}

int mcd4(int a, int b, int c, int d){
	int resultat1, resultat2;
	
    resultat1 = mcd2(a,b);
    resultat2 = mcd2(c,d);
    return mcd2(resultat1, resultat2);
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    cout << mcd4(a,b,c,d) << endl;
}
