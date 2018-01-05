#include <iostream>
using namespace std;

bool c_frac(int n1, int d1, int n2, int d2){
    if ((double(n1)/double(d1)) < (double(n2)/double(d2))) return true;
    return false;
}

int main (){
    int a = 0,b = 0,c = 0,d = 0;
    while (cin >> a >> b >> c >> d){
        cout << c_frac(a,b,c,d) << endl;
    }
}
