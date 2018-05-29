#include <iostream>
using namespace std;

int main() {
    int n,suma,valors,sumavalors;
    
        while(cin >> n){
            suma = 0;
            sumavalors = 0;
            for (int i = 1; i <= n; i++) {
                suma += i;
            }
            
            for (int j = 1; j <= n-1; j++){
                cin >> valors;
                sumavalors += valors;
            }
            cout << suma-sumavalors << endl;
        }
}
