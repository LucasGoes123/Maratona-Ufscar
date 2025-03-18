#include <iostream>
using namespace std;

int main() {
    char cor, cor_anterior;
    int pedras;
    int cont = 0;
    cin >> pedras;
    for(int i = 0; i < pedras; i++){
        cin >> cor;
        if(i > 0){
            if(cor == cor_anterior) cont++;
        }
        cor_anterior = cor;
    }
    cout << cont;
    return 0;
}