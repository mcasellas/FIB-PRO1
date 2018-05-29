#include <iostream>
#include <vector>
using namespace std;

int main (){
    int n;
    
    while (cin >> n){
        int suma = 0;
        vector<int> v(n);
        bool trobat = false;
        for (int i = 0; i < n; ++i){
            cin >> v[i];
            suma += v[i];
        }
        
        int j = 0;
        while (j < n and !trobat){
            if (suma - v[j] == v[j]) trobat = true;
            ++j;
        }
        
        if (trobat) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

