#include <iostream>
using namespace std;

int suma_digits(int n){
    if (n < 10) return n;
    return n%10 + suma_digits(n/10);
}

bool es_primer(int x) {
    if (x <= 1) return false;
    for (int i = 2; i*i <= x; ++i) {
        if (x%i == 0) return false;
    }
    return true;
}

bool es_primer_perfecte(int n) {
   if (n < 10) return es_primer(n);
   return es_primer(n) and es_primer_perfecte(suma_digits(n));
}


int main() {
    int n;
    while(cin >> n){
        cout << es_primer_perfecte(n) << endl;
    }
}
