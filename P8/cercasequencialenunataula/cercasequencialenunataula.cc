#include <iostream>
#include <vector>
using namespace std;

bool hi_es(int x, const vector<int>& v){
    for (int i; i < v.size(); ++i) {
        if (x == v[i]) {
            return true;
        }
    }
    return false;
}


int main (){
    int x = 4;
    
    vector <int> v(0);
    
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    
    cout <<  hi_es(x,v) << endl;
}
