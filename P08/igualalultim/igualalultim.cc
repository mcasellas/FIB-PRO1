#include <iostream>
#include <vector>
using namespace std;

int main (){
    int n,cont = 0;
    cin >> n;
    vector <int> valor(n);
    
    for (int i = 0; i < n; ++i){
        cin >> valor[i];        
    }
    
    for (int j = 0; j < n-1; ++j){
        if (valor[j] == valor[n-1]){
            ++cont;
        }
    }
    cout << cont << endl;
}
