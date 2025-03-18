#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    int cont = 0;
    cin >> nome;
    for(int i = 0; i < nome.size(); i++){
        int cont2 = 0;
        for(int k = i; k >= 0; k--){
            if(k != i){
                if(nome[k] == nome[i]) cont2++;
            }
        }
        if(cont2 == 0) cont++;
    }
    if(cont%2 == 0) cout << "CHAT WITH HER!\n";
    else cout << "IGNORE HIM!\n";
    return 0;
}