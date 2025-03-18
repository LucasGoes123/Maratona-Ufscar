#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int vetor[n], maior = 0;;

    for(int i = 0; i < n ; i++) cin >> vetor[i];

    for(int i = n-1; i >= 0 ; i--){
        int altura = 0;
        int k = i;
        while(vetor[k] != -1){
            k = vetor[k]-1;
            altura++;
        }
        altura++;

        if(altura > maior) maior = altura;
    }

    cout << maior;
    return 0;
}