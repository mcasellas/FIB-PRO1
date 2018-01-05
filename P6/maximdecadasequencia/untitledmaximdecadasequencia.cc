#include <iostream>
using namespace std;

int main() {
    int n,valors,maxim;
    while(cin >> n){
    
    bool inici = true;
    for (int i = 1; i <= n; i++){
        cin >> valors;
        if (inici){
            maxim = valors;
            inici = not inici;
        }
        if (maxim < valors) maxim = valors;
    }
    
    
    cout << maxim << endl;
    }
    }
