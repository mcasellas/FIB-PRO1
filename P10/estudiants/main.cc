#include <iostream>
#include <vector>
using namespace std;

struct Estudiant {
int dni;
string nom; 
double nota;
bool repetidor;
};

void informacio(const vector<Estudiant>& es, double& min, double& max, double& mitj) {  
    min = -1;
    max = -1;
    mitj = -1;
    int contador = 0;
    
    for (int i = 0; i < (int)es.size(); ++i){
        if (not es[i].repetidor and es[i].nota != -1) {
            if (min == -1){
                min = es[i].nota;
                max = es[i].nota;
                mitj = es[i].nota;
            } 
            else {
                if (min > es[i].nota) min = es[i].nota;
                if (max < es[i].nota) max = es[i].nota;
                mitj += es[i].nota;
            }
            ++contador;
        } 
        
    }
    
     if (mitj != -1) mitj = mitj / contador;
}

int main () {
    double min = 10, max = 0, mitj;
    
    vector<Estudiant> es (4);
    es[0].nota = 5;
    es[0].repetidor = false;
    
    es[1].nota = 8;
    es[1].repetidor = false;
    
    es[2].nota = 9;
    es[2].repetidor = false;
    
    es[3].nota = 9;
    es[3].repetidor = true;
    
    informacio(es,min,max,mitj);
    
    cout << min << " " << max << " " << mitj << " " << endl;
    
}

