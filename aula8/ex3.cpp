#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, numerador = 1, denominador = 2;
    cin >> n;

    for(int i = 1; i < n; i++){
        int aux = denominador;
        denominador += numerador;
        numerador = aux;
    }

    cout << numerador;

    return 0;
}