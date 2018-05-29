#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenacio(const vector<int>& v1, const vector<int>& v2){
    vector <int> v3(v1.size()+v2.size());
    
    for (int i = 0; i < v1.size(); ++i){
        v3[i] = v1[i]; 
    }
    for (int j = v1.size(); j < v3.size(); ++j){
        v3[j] = v2[j-v1.size()]; 
    }
    
    return v3;
}


int main (){
}
