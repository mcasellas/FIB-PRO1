#include <iostream>
using namespace std;

void capgirarin(int i, int n, int & m) {
string st;
if (cin >> st) {
    i = i+1;
    capgirarin(i,n,m);
    if (m-1+1 <= n) { 
        cout << st << endl;
        }
    }
else {m=i;}
}

void capgirar(){
    int n,m;
    cin >> n;
    capgirarin(0,n,m);
}

int main () {
    string a;
    int n;
    cin >> n;
    while (cin >> a){
        capgirar(a,n)
    }
}
