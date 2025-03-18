#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        string binario;
        int total0 = 0, total1 = 0;
        int qtd0 = 0, qtd1 = 0;
        int custo0 = 0, custo1 = 0;

        cin >> binario;

        for(unsigned j = 0; j < binario.length(); j++){
            if(binario[j] == '0') total0++;
            else if(binario[j] == '1') total1++;
        }

        for(unsigned j = 0; j < binario.length(); j++){
            if(binario[j] == '0') qtd0++;
            else if(binario[j] == '1') qtd1++;
            if(custo0 > qtd0 + total1 - qtd1 || j == 0) custo0 = qtd0 + total1 - qtd1;
            if(custo1 > qtd1 + total0 - qtd0 || j == 0) custo1 = qtd1 + total0 - qtd0;
        }

        if(custo0 < custo1) cout << custo0 << "\n";
        else cout << custo1 << "\n";
    }
}