#include <iostream>
#include <vector>
using namespace std;

int main (){
    int n;
    vector <int> v(1001,0);
    cin >> n;
    
    for (int i = 1; i <= n; i++){
        int valor;
        cin >> valor;
        ++v[valor%10000];
    }
    
    for (int j = 0; j <= 1001; j++){
        if (v[j] != 0) cout << 1000000000+j << " : " << v[j] << endl;
    }
}

