#include <iostream>
using namespace std;



bool tres_digits_seguits_iguals(int n, int b){
    if(n%b == (n/b)%b and n != 0 and (n/b)%b == ((n/b)/b)%b) return true;
    else if (n!=0) return tres_digits_seguits_iguals(n/b,b);
    else return false;
}

int main (){
    
}
