
#include <iostream>
using namespace std;

int main(){
    char n;
    int tancats = 0;
    while (cin >> n and tancats >= 0){
        if (n == '(') ++tancats;
        else --tancats;
        }
    
    if (tancats == 0) cout << "si" << endl;
    else cout << "no" << endl;
}
