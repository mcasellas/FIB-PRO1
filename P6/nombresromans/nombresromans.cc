#include <iostream>
using namespace std;

void conversio(int n,int valor){
    string s;
    
    if (n==1) s = "I";
    if (n==2) s = "II";
    if (n==3) s = "III";
    if (n==4) s = "IV";
    if (n==5) s = "V";
    if (n==6) s = "VI";
    if (n==7) s = "VII";
    if (n==8) s = "VIII";
    if (n==9) s = "IX";
    
    for (int i=0; i < s.size(); i++){
        if (valor == 1000 and s[i] == 'I') cout << 'M';
        else if (valor == 100 and s[i] == 'I') cout << 'C';
        else if (valor == 100 and s[i] == 'V') cout << 'D';
        else if (valor == 100 and s[i] == 'X') cout << 'M';
        else if (valor == 10 and s[i] == 'I') cout << 'X';
        else if (valor == 10 and s[i] == 'V') cout << 'L';
        else if (valor == 10 and s[i] == 'X') cout << 'C';
        else cout << s[i];
    }
}

int main(){
   int n,mil,cent,deu,u;
   while(cin >> n){
       mil = n/1000;
       cent = (n%1000)/100;
       deu = (n%100)/10;
       u = (n%10)%10;
       
       cout << n << " = ";
       conversio(mil,1000);
       conversio(cent,100);
       conversio(deu,10);
       conversio(u,1);
       cout << endl; 
   }
}
