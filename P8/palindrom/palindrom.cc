#include <iostream>
#include <vector>
using namespace std;

bool es_palindrom(const string& s){
    int mida = s.size();
    for (int i = 0; i <= mida/2; ++i){
        if (s[i] != s[mida-1-i]){
            return false;
        }
    }
    return true;
}

int main (){
}

