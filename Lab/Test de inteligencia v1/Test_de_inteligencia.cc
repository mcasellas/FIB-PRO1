#include <iostream>
 
using namespace std;
 
int main(){
string resp;
int nota = 0;
int npreg;
 
 
 cout << "P1. What comes next in the series?" << endl;
 cout << "	"	<< "- 36" << endl;
 cout << "	"	<< "- 51" << endl;
 cout << "Entra la teva resposta:"	<< endl;
 cout << " "	<< endl;
 
 cin >> resp; 
 
	if (resp == "36") {
		nota = nota+20;
		cout << "Resposta correcta"	<< endl;
		cout << " "	<< endl;
		npreg = 1;
		
				
		}
	else {
		nota = nota-10;
		cout << "Resposta incorrecta" << endl;
		cout << " "	<< endl;
		npreg = 1;
				}
		
		if (npreg == 1) {
			cout << "P2. If you unscramble the letters in 'icnha' you get the name of a:" << endl;
			cout << "	"	<< "- State" << endl;
			cout << "	"	<< "- City" << endl;
			cout << "	"	<< "- Country" << endl;
			cout << "	"	<< "- Animal" << endl;
			cout << "Entra la teva resposta:"	<< endl;
			cin >> resp;
			
				if (resp == "State") {
					nota = nota+20;
					cout << "Resposta correcta"	<< endl;
					cout << " "	<< endl;
					npreg = 2;
				}
				
				else {
					nota = nota-10;
					cout << "Resposta incorrecta" << endl;
					cout << " "	<< endl;
					npreg = 2;
					}
		}
	
		if (npreg == 2) {
			cout << "P3. If all boogs are toogs and some foogs are toogs, then all boogs definately foogs." << endl;
			cout << "	"	<< "- True" << endl;
			cout << "	"	<< "- False" << endl;
			cout << "Entra la teva resposta:"	<< endl;
			cin >> resp;
			
				if (resp == "False") {
					nota = nota+20;
					cout << "Resposta correcta"	<< endl;
					cout << " "	<< endl;
					npreg = 3;
				}
				
				else {
					nota = nota-10;
					cout << "Resposta incorrecta" << endl;
					cout << " "	<< endl;
					npreg = 3;
					}
		}
	
		if (npreg == 3) {
			cout << "P4. What is half of square root of 144?" << endl;
			cout << "	"	<< "- 6" << endl;
			cout << "	"	<< "- 12" << endl;
			cout << "Entra la teva resposta:"	<< endl;
			cin >> resp;
			
				if (resp == "6") {
					nota = nota+20;
					cout << "Resposta correcta"	<< endl;
					cout << " "	<< endl;
					npreg = 4;
				}
				
				else {
					nota = nota-10;
					cout << "Resposta incorrecta" << endl;
					cout << " "	<< endl;
					npreg = 4;
					}
		}
	
		if (npreg == 4) {
			cout << "P5. What is half od one-tenth of one half of 600?" << endl;
			cout << "	"	<< "- 60" << endl;
			cout << "	"	<< "- 15" << endl;
			cout << "Entra la teva resposta:"	<< endl;
			cin >> resp;
			
				if (resp == "15") {
					nota = nota+20;
					cout << "Resposta correcta"	<< endl;
					cout << " "	<< endl;
					cout << " "	<< endl;
					cout << nota << endl;
				}
				
				else {
					nota = nota-10;
					cout << "Resposta incorrecta" << endl;
					cout << " "	<< endl;
					cout << " "	<< endl;
					cout << nota << endl;
				}
		}
			
	}
