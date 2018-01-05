#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;
 	
void canvia(int& a, int& b){
    int c = a;
    a = b;
    b = c;
}

void transposa(Matriu& m){
    int tamany = m.size();
        for (int i = 0; i < tamany - 1; ++i) {
            for (int j = i + 1; j < tamany; ++j){
                canvia(m[i][j],m[j][i]);
            }
    }
}

   
int main (){ 
    
}
