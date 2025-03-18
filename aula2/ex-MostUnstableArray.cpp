#include <iostream>
using namespace std;

int main() {
    int length, sum, qtd;
    cin >> qtd;
    for(int i = 0; i < qtd; i++){
        cin >> length >> sum;
        if(length < 2) cout << 0 << '\n';
        else if(length == 2) cout << sum << '\n';
        else cout << 2*sum << '\n';
    }
    return 0;
}