#include <iostream>

using namespace std;

int main(){
    // Seu código vai aqui
    int maior, num;
    maior = num = -1;
    while(num != 0){
        cin >> num;
        if(maior < num){
            maior = num;
        }
    }
    cout << maior;
    return 0;
}
