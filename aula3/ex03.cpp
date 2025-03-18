#include <iostream>

using namespace std;

int main(){
    int matriz[5][5];
    int num[2] = {0, 0};
    for(int i = 0; i < 5; i++){
        for(int k = 0; k < 5; k++){
            cin >> matriz[i][k];
            if(matriz[i][k] == 1){
                num[0] += i;
                num[1] += k;
            } 
        }
    }
    num[0] = 2 - num[0];
    num[1] = 2 - num[1];
    if(num[0] < 0) num[0] = num[0]*-1;
    if(num[1] < 0) num[1] = num[1]*-1;
    cout << num[0]+num[1] << "\n";
    return 0;
}
