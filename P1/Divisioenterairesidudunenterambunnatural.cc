#include <iostream>
using namespace std;
int main() {
  int a,b,d,r;
  cin >> a >> b;
  
  if (a < 0){
    if ((a%b) == 0) {
    r= (a%b);
    d = (a/b);
    }
    else {
    r= (a%b)+ b;
    d = (a/b) - 1;
    }
  }
  else {
    d = a/b;
    r = a%b;
  } 
  
  
  cout << d << ' ' << r << endl;
  
}