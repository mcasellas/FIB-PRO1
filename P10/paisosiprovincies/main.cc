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

double pib(const Paisos& p, char c, double d){
    double suma = 0;
    
    for (int i = 0; i < int(p.size()); ++i) {
        
        if (p[i].nom[0] == c) {
            for (int j = 0; j < int(p[i].provs.size()); ++j) {
                if (double(p[i].provs[j].habitants)/double(p[i].provs[j].area)>d){
                    suma += p[i].provs[j].pib;
                }
            }
        }
    }
    
    return suma;
}

int main () {
   
    
}

