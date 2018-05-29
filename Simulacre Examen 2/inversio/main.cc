#include <iostream>
#include <vector>
using namespace std;

int main (){
    int n;
    while (cin >> n){
        vector<int> v(n);
         
        for (int i = 0; i < n; ++i){
            cin >> v[i];
        }
        
        for (int j = n-1; j > -1; --j){
            cout << v[j];
            if (j != 0) cout << " ";
        }
        cout << endl;
    }
}
