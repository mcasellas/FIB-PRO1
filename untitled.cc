#include <iostream>
using namespace std;

typedef vector<string> Fila;
typedef vector<Fila> Matriu;
 
Matriu llegir_mat(int n, int m) {
        Matriu mat(n, Fila (m));
        for (int i = 0;i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                        cin >> mat[i][j];
                }
        }
        return mat;
}
 
bool te_char(const string& s, char c, int k) {
        if(k > (s.size() - 1)) return false;
        else return s[k] == c;
}
int nombre_de_paraules(const Matriu& m, char c, int k) {
        int fil = m.size();
        int col = m[0].size();
        int count = 0;
        for (int i = 0; i < fil; ++i) {
                for (int j = 0; j < col; ++j) {
                        if(te_char(m[i][j],c,k)) ++count;
                }
        }
        return count;
}
 
int main() {
        int n, m, pos;
        char c;
        cin >> n >> m >> pos >> c;
        Matriu mat = llegir_mat(n,m);
        int res = nombre_de_paraules(mat,c,pos);
        cout << res << endl;
}
