#include <iostream>
using namespace std;

int main() {
    int friends, height, f_height;
    int cont = 0;
    cin >> friends >> height;
    for(int i = 0; i < friends; i++){
        cin >> f_height;
        if(f_height > height) cont += 2;
        else cont ++;
    }
    cout << cont;
    return 0;
}