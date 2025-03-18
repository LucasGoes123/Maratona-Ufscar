#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;
        char caminho[n];
        int moedas = 0;
        scanf("%s", caminho);

        for(int i = 0; i < n; i++){
            if(i > 0){
                if((caminho[i] == '*') && (caminho[i-1] == '*')) break;
            }
            if(caminho[i] == '@') moedas++;
        }

        cout << moedas << "\n";
    }


    return 0;
}