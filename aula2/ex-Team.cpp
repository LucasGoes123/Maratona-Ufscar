#include <iostream>
using namespace std;

int main() {
    int problemas, Petya, Vasya, Tonya;
    int cont = 0;
    cin >> problemas;
    for(int i = 0; i < problemas; i++){
        int cont2 = 0;
        cin >> Petya >> Vasya >> Tonya;
        if(Petya == 1) cont2++;
        if(Vasya == 1) cont2++;
        if(Tonya == 1) cont2++;
        if(cont2 > 1) cont++;
    }
    cout << cont;
    return 0;
}