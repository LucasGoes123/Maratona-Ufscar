#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned t;
    long long int n;
    cin >> t;

    for(unsigned i = 0; i < t; i++){
        cin >> n;
        long long int sum = n;

        while(n > 1){
            if(n % 2 == 0) n = n/2;
            else n = (n-1)/2;

            sum += n;
        }

        cout << sum << "\n";
    }
    return 0;
}