
#include <iostream>
using namespace std;

bool es_primer(int x) {
    if (x <= 1) return false;
    for (int i = 2; i*i <= x; ++i){
        if (x%i == 0) return false;
    }
    return true;
}

int main(){
     int n, valors;
     cin >> n;
     
    for (int i = 0; i < n; ++i){
        cin >> valors;
        if (es_primer(valors)) cout << valors << " es primer" << endl;
        else cout << valors << " no es primer" << endl;
    }
}
