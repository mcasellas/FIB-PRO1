#include <iostream>
using namespace std;

int main() {
    int n,resultat;
    cin >> n;
    
    for (int i = 1; i <= n; i++){
        resultat += i*i;
    }
    
    cout << resultat << endl;
}
