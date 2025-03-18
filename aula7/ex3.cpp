#include <bits/stdc++.h>

using namespace std;

bool comp (int a, int b) {
  return a > b;
}


int main(){
    int t, n;

    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;
        int num[n];

        for(int j = 0; j < n; j++) cin >> num[j];

        while(1){
            if(n == 1) break;

            sort(num, num + n, comp);

            num[n-2] = (num[n-2]+num[n-1]) / 2;
            n--;
        }

        cout << num[0] << "\n";
    }

    return 0;
}