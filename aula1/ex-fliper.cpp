#include <iostream>

using namespace std;

int main(){
    // Lendo a entrada do exercício
    int A, B;
    cin >> A >> B;

    // Seu código vai aqui
    if(A == 0) cout << "C";
    else{
        if(B == 0) cout << "B";
        else cout << "A";
    }
    return 0;
}

