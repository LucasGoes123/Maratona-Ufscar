#include <bits/stdc++.h>
#include <array>

using namespace std;

int main(){
    int n;
    cin >> n;
    int roteadores[n];
    roteadores[0] = 1;
    int caminho[n];

    for(int i = 1; i < n; i++) cin >> roteadores[i];

    caminho[0] = 1;

    int k = n-1;
    int j = 1;
    while(roteadores[k] != 1){
        caminho[j] = roteadores[k];
        k = roteadores[k]-1;
        j++;
    }

    caminho[j] = n;
    j++;

    sort(caminho, caminho+j);

    for(int i = 0; i < j; i++) cout << caminho[i] << " ";

    return 0;
}