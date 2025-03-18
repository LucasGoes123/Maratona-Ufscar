#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int matriz[n][n];
    int vetor[4];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cin >> matriz[i][j];
    }

    vetor[0] = matriz[0][0];
    vetor[1] = matriz[0][n-1];
    vetor[2] = matriz[n-1][n-1];
    vetor[3] = matriz[n-1][0];

    sort(vetor, vetor+4);

    if(vetor[0] == matriz[0][0]) cout << 0 << "\n";
    else if(vetor[0] == matriz[0][n-1]) cout << 1 << "\n";
    else if(vetor[0] == matriz[n-1][n-1]) cout << 2 << "\n";
    else if(vetor[0] == matriz[n-1][0]) cout << 3 << "\n";

}