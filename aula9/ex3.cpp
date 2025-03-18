#include <bits/stdc++.h>
 
using namespace std;

int main(){
    int t, pontos[3];
    cin >> t;
    
    for(int i = 0; i < t; i++){
        for(int j = 0; j < 3; j++) cin >> pontos[j];

        if((pontos[0] + pontos[1] + pontos[2]) % 2 != 0) cout << -1 << "\n";
        else if((pontos[0] + pontos[1]) < pontos[2]) cout << pontos[0] + pontos[1] << "\n";
        else{
            int e1 = (pontos[1] + pontos[2] - pontos[0])/2;
            int e2 = (pontos[0] + pontos[2] - pontos[1])/2;
            int e3 = (pontos[0] + pontos[1] - pontos[2])/2;
            cout << e1 + e2 + e3 << "\n";

        }
    }
    return 0;
}