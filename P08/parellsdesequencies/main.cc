#include <iostream>
#include <vector>
using namespace std;

bool es_primer(int x) {
    if (x <= 1) return false;
    for (int i = 2; i*i <= x; ++i){
        if (x%i == 0) return false;
    }
    return true;
}

int main (){
    int n;
    while (cin >> n){
        bool trobat = false;
        vector<int> v(n);
        for (int i = 0; i < n; ++i){
            cin >> v[i];
        }
        
        int j = 0;
        while (j < n and !trobat){
            int k = 0;
            while (k < j and !trobat){
            if (es_primer(v[j]+v[k]) == true) trobat = true;
            ++k;
            }
            ++j;
        }
        
        if (trobat) cout << "si" << endl;
        else cout << "no" << endl;
        
    }
}

