#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int avalua(const vector<int>& p, int x){
    int suma = 0;

    for (int i = 0; i < p.size(); ++i){
        suma += p[i]*pow(x, i);
    }
    
    return suma;
}

int main() {

}
