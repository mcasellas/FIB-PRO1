#include <iostream>
#include <vector>
using namespace std;

double producte_escalar(const vector<double>& u, const vector<double>& v){
    double suma = 0;
    for (int i; i < u.size(); ++i){
        suma += u[i]*v[i];
    }
    return suma;
}


int main (){
}
