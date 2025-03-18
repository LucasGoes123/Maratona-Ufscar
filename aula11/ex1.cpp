#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int alturas[n], sum = 0;

    for(int i = 0; i < n; i++) cin >> alturas[i];
    for(int i = 0; i < k; i++) sum += alturas[i];
    int menor = sum, posicao = 0;


    for(int i = k; i < n; i++){
        sum -= alturas[i-(k)];
        sum += alturas[i];
        if(sum < menor){
            menor = sum;
            posicao = i - (k-1);
        }
    }

    cout << posicao+1 << "\n";
    
    return 0;
}