#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, q;
    cin >> n >> q;

    int elementos[n];
    int frequencia[n];

    for(int i = 0; i < n; i++){
        cin >> elementos[i];
        frequencia[i] = 1;
    }

    sort(elementos, elementos+n);

    for(int i = 0; i < q; i++){
        int l, r;

        cin >> l >> r;

        for(int j = l-1; j < r-1; j++){
            frequencia[j]++;
        }
    }

    sort(frequencia, frequencia+n);

    int sum = 0;

    cout << n << "\n";

    for(int i = 0; i < n; i++){
        cout << elementos[i] << " "<< frequencia[i] << "\n";
        sum += frequencia[i]*elementos[i];
    }

    cout << sum;
}