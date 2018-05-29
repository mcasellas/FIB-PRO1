#include <iostream>
using namespace std;

int main(){
    char c;
    bool trobat = false;
    cin >> c;
    while(c != '.'){
        if (c == 'a') trobat = true;
        cin >> c;
    }
    if (trobat == true) cout << "si" << endl;
    else cout << "no" << endl;
}
