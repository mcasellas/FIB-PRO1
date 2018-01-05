#include <iostream>
#include <vector>
using namespace std;

void imprimir(vector<char> v,int n){
    for (int k = 0; k < n; ++k) {
        cout << v[k];
    }
    cout << endl;
}

void conversio (vector<char>& v,int n){
    for (int m = 0; m < n; ++m){
        if (v[m] == '>') { // fletxa dreta
            if (m == n-1) {
                v[m] = '.'; 
                v[m-1] = '<';
            }
            else if (v[m+1] == '<') {
                v[m] = v[m+1] = '.';
                v[m-1] = '<';
                v[m+1] = '>';
            }
            else if (v[m+1] == '.') {
                v[m] = '.';
                v[m+1] = '>';
                ++m;
            }
        }
        else if (v[m] == '<') { // fletxa esquerra
            if (m == 0) {
                v[m] = '.';
                v[m+1] = '>';
                ++m;
            }
            else if (v[m-1] == '.') {
                v[m] = '.';
                v[m-1] = '<';
            }
        }
    }
}

int main() {
    int n = 0, p = 0;
    
    while (cin >> n >> p){
        vector<char> v(n, '.');
        
        int dreta;
        cin >> dreta;
        for (int i = 0; i < dreta; ++i){
            int posicio;
            cin >> posicio;
            v[posicio-1] = '>'; 
        }
        
        int esquerra;
        cin >> esquerra;
        for (int j = 0; j < esquerra; ++j){
            int posicio;
            cin >> posicio;
            v[posicio-1] = '<'; 
        }
                    
        for (int l = 0; l < p; ++l){
        imprimir(v,n);
        conversio(v,n);
    }
     cout << endl;
    }
}
