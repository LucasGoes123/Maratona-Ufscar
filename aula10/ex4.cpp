#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, k;
    cin >> t;

    while (t--) {
        cin >> n >> k;
        string papel;
        cin >> papel;

        int qtd = 0, menor;
        
        
        for (int j = 0; j < k; j++) {
            if (papel[j] == 'W') qtd++;
        }
        
        menor = qtd;

        for (int j = k; j < n; j++) {
            if (papel[j - k] == 'W') qtd--;  
            if (papel[j] == 'W') qtd++;  
            menor = min(menor, qtd); 
        }

        cout << menor << "\n";
    }

    return 0;
}
