#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;
        int num[n], impar, par, qtd = 0;

        for(int j = 0; j < n; j++) cin >> num[j];

        sort(num, num+n);
        
        while(1){
            if
        }
        
        for(int j = n-1; j >= 0; j--){
            if(num[j] % 2 == 0) par = j;
            break;
        }

        for(int j = n-1; j >= 0; j--){
            if(num[j] % 2 != 0) impar = j;
        }

        if(num[impar] < num[par]) num[impar] += num[par];
        else num[par] += num[impar];
    }

    return 0;
}