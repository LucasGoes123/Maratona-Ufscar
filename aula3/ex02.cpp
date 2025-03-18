#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    int matriz[num][3];
    int sum[3] = {0, 0 ,0};
    for(int i = 0; i < num; i++){
        for(int k = 0; k < 3; k++){
            cin >> matriz[i][k];
        }
    }
    for(int i = 0; i < num; i++){
        sum[0] += matriz[i][0];
        sum[1] += matriz[i][1];
        sum[2] += matriz[i][2];
    }
    if(sum[0] == 0 && sum[1] == 0 && sum[2] == 0) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}

