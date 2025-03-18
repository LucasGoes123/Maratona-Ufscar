#include <bits/stdc++.h>

using namespace std;

// Função para calcular a soma dos dígitos de um número
int somar_digitos(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    // Usamos um heap máximo para manter sempre o maior valor no topo
    priority_queue<int> polens;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        polens.push(x);
    }

    int qtd_polens = 0;

    for (int i = 0; i < k; i++) {
        int maior = polens.top();  // Pegamos o maior valor
        polens.pop();
        
        if (maior == 0) break;  // Se já for 0, paramos
        
        int soma_digitos = somar_digitos(maior);
        
        if (i == k - 1) {
            qtd_polens = soma_digitos;  // Pegamos o último valor processado
            break;
        }

        polens.push(maior - soma_digitos);  // Atualizamos o maior valor e reinserimos na heap
    }

    cout << qtd_polens << endl;
}
