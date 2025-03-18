#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t, n;
    cin >> t;
 
    for(int i = 0; i < t; i++){
        cin >> n;
        int vetor[n], vetor2[n], vetor3[4], k, min = 0, max = 0;

        for(int j = 0; j < n; j++) cin >> vetor[j];
        for(int j = 0; j < n; j++) vetor2[j] = vetor[j];
 
        sort(vetor2, vetor2+n);
 
        for(k = 0; k < n; k++){
            if(min == 1 && max == 1) break;
            if(vetor[k] == vetor2[0]) min++;
            else if(vetor[k] == vetor2[n-1]) max++;
        }
        vetor3[0] = k;

        min = max = 0;

        for(k = n-1; k >= 0; k--){
            if(vetor[k] == vetor2[0]) min++;
            else if(vetor[k] == vetor2[n-1]) max++;
            if(min == 1 && max == 1) break;
        }    
        vetor3[1] = n-k;

        min = max = 0;

        for(k = 0; k < n; k++){
            if(min == 1) break;
            if(vetor[k] == vetor2[0]) min++;
        }
        vetor3[2] = k;

        for(k = n-1; k >= 0; k--){
            if(vetor[k] == vetor2[n-1]) max++;
            if(max == 1) break;
        }    
        vetor3[2] += n-k;

        min = max = 0;

        for(k = 0; k < n; k++){
            if(max == 1) break;
            if(vetor[k] == vetor2[n-1]) max++;
        }
        vetor3[3] = k;

        for(k = n-1; k >= 0; k--){
            if(vetor[k] == vetor2[0]) min++;
            if(min == 1) break;
        }    
        vetor3[3] += n-k;

        /*for(int j = 0; j < 4; j++){
            cout << vetor3[j] << " ";
        }
        cout << "\n";*/

        sort(vetor3, vetor3+4);

        cout << vetor3[0] << "\n";

    }
    return 0;
}