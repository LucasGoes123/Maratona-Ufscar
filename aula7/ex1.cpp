#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> k;
        int people[n], gold = 0, qtd_people = 0;
        for(int j = 0; j < n; j++) cin >> people[j];

        for(int j = 0; j < n; j++){
            if(people[j] >= k){
                gold += people[j];
                people[j] = 0;
            }
            else if(people[j] == 0 && gold > 0){
                gold--;
                qtd_people++;
            }
        }

        cout << qtd_people << '\n';
    }

    return 0;
}