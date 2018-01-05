#include <iostream>

using namespace std;

int main() {
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d;


    if (((a < c) and (b < c)) or ((c < a) and (d < a))) { 
        cout << '[' << ']' << endl;
    }

    else if (a >= c) {
        if (d <= b) {
            cout << '[' << a << ',' << d << ']' << endl;
        }

        else {
            cout << '[' << a << ',' << b << ']' << endl;
        }
    }

    else if (c >= a) {
        if (d <= b) {
            cout << '[' << c << ',' << d << ']' << endl;
        }

        else {
            cout << '[' << c << ',' << b << ']' << endl;
        }
    }



}

