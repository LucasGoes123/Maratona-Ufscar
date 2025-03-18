#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, sum1 = 0, sum2 = 0;
    cin >> n;

    int cartas[n], min = 0, max = n-1 , cont = 0;

    for(int i = 0; i < n; i++) cin >> cartas[i];

    while(max >= min){
        if(cont % 2 == 0){
            if(cartas[max] > cartas[min]){
                sum1 += cartas[max];
                max--;
            }
            else{
                sum1 += cartas[min];
                min++;
            }
        }
        else{
            if(cartas[max] > cartas[min]){
                sum2 += cartas[max];
                max--;
            }
            else{
                sum2 += cartas[min];
                min++;
            }
        }
        cont++;
    }

    cout << sum1 << " " << sum2 << "\n";
}