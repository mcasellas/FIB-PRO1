#include <iostream>
#include <vector>
using namespace std;

struct Provincia { 
    string nom;
    string capital;
    int habitants;
    int area;
    double pib;
};

struct Pais { 
    string nom;
    string capital;
    vector<Provincia> provs;
};

typedef vector<Pais> Paisos;

int habitants(const Paisos& p, double x){
    int sumahabitants = 0;
    for (int i = 0; i < int(p.size()); ++i) {
        int provincies = 0;
        int habitantspais = 0;
        for (int j = 0; j < int(p[i].provs.size()); ++j){
            if (p[i].provs[j].pib <= x) ++provincies;
            
            habitantspais += p[i].provs[j].habitants;
        }
        if (provincies > 1) sumahabitants += habitantspais;
    }
    return sumahabitants;
}

int main () {
       
}

