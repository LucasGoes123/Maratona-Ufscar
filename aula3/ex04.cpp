#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    char palavra[num][100];
    for(int i = 0; i < num; i++){
        cin >> palavra[i];
    }
    for(int i = 0; i < num; i++){
        int k = 0;
        for( k = 0; k < 100; k++){
            if(palavra[i][k] == '\0') break;
        }
        if(k <= 10) cout << palavra[i] << "\n";
        else cout << palavra[i][0] << k-2 << palavra[i][k-1] << "\n";
    }
    return 0;
}

