#include <bits/stdc++.h>
using namespace std;

void trocar(int vetor[], int num1, int num2){
    int aux = vetor[num1];
    vetor[num1] = vetor[num2];
    vetor[num2] = aux;
}

void insertion(int vetor[], int num){
    for(int i = 1; i < num; i++){
        int j = i;
        while(j > 0 && vetor[j-1] > vetor[j]){
            trocar(vetor, j-1, j);
            j--;
        }
    }
}
int main() {
    int numeros[3];
    cin >> numeros[0] >> numeros[1] >> numeros[2];
    insertion(numeros, 3);
    int dist = (numeros[1]-numeros[0])+(numeros[2]-numeros[1]);
    cout << dist;
    return 0;
}