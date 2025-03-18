#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;
        int min = 0, max = n-1;
        char binario[n];

        for(int j = 0; j < n; j++) cin >> binario[j];

        while(max >= min){
            if(binario[min] == binario[max]) break;
            min++;
            max--;
        }

        cout << max-min+1 << "\n";
    }
}