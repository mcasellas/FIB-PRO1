#include <iostream>
using namespace std;

int main(){
    int n;
    int posicio = 1;
    bool trobat = false;
   
   while (cin >> n and trobat == false){
        if (n%2 == 0) {
            cout << posicio << endl;
            trobat = true;
        }
        else ++posicio;
   }
}
