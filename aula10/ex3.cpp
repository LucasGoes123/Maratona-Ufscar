#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, k;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> k;
        char papel[n];
        int cont = 0;

        for(int j = 0; j < n; j++) cin >> papel[j];

        for(int j = 0; j < n; j++){
            if(papel[j] == 'B'){
                for(int l = j; l < j+k; l++){
                    if(l == n) break;
                    papel[l] = 'W';
                }
                cont++;
            }
        }

        cout << cont << "\n";
    }

    return 0;
}