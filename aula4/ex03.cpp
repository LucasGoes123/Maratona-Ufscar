#include <bits/stdc++.h>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1;
    for(int i = 0; i < num1;i++){
        cin >> num2;
        int numero, soma = 0;
        for(int j = 0; j < num2; j++){
            cin >> numero;
            if(numero < 0) soma += -1*numero;
            else soma += numero;
        }
        cout << soma << "\n";
    }
    return 0;
}