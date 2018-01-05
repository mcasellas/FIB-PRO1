#include <iostream>
#include <cmath>
using namespace std;

struct Punt { double x, y; };

double distancia(const Punt& a, const Punt& b){
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

void desplaca(Punt& p1, const Punt& p2){
    p1.x += p2.x;
    p1.y += p2.y;
}

struct Cercle { 
    Punt centre;
    double radi;
};

void escala(Cercle& c, double esc){
    c.radi *= esc;
}

void desplaca(Cercle& c, const Punt& p){
    desplaca(c.centre,p);
}
 
bool es_interior(const Punt& p, const Cercle& c){
    return distancia(p,c.centre) < c.radi;
}

void llegeix(Punt& p){
    cin >> p.x >> p.y;
}

void llegeix(Cercle& c){
    cin >> c.centre.x >> c.centre.y >> c.radi;
}

int main () {
    
    
    Cercle c;
    Punt p;
    
    llegeix(c);
    llegeix(p);
    int ent;
    cin >> ent;
    
    bool estavaadins;
    
    if (es_interior(p,c)){
        cout << "inicialment a dins" << endl;
        estavaadins =  true;
    }
        
    else{
        cout << "inicialment a fora" << endl;
        estavaadins = false;
    }
    
    
    for (int i = 1; i < ent+1; ++i) {
        Punt nou;
        llegeix(nou);
        desplaca(p,nou);
        if (es_interior(p,c) and !estavaadins) {
            cout << "al pas " << i << " ha entrat a dins" << endl;
            estavaadins = true;
        }
        else if (!es_interior(p,c) and estavaadins){
            cout << "al pas " << i << " ha sortit a fora" << endl;
            estavaadins = false;
        }
    }
}




