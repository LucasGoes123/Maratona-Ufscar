#include <bits/stdc++.h>
using namespace std;

void trocar(int vetor[], int num1, int num2){
    int aux = vetor[num1];
    vetor[num1] = vetor[num2];
    vetor[num2] = aux;
}
int partition(int vetor[], int min, int max){
    int i = min, j = max+1;
    while(1){
        while(vetor[++i] < vetor[min])
            if(i == max) break;
        while(vetor[--j] > vetor[min])
            if(j == min) break;
        if(i >= j) break;
        trocar(vetor, i, j);
    }
    trocar(vetor, min, j);
    return j;
}
void quicksort(int vetor[], int min, int max){
    if(min >= max) return;
    int i = partition(vetor, min, max);
    quicksort(vetor, min, i-1);
    quicksort(vetor, i+1, max);
}
int main() {
    int numeros[50];
    char string[100];
    int cont = 0;
    cin >> string;
    for(int i = 0; i < 100; i++){
        if(i%2 == 0){
            numeros[cont] = string[i]-48;
            cont++;
        }
        else if(string[i] != '+') break;
    }
    quicksort(numeros, 0, cont-1);
    cout << numeros[0];
    for(int i = 1; i < cont; i++){
        cout << "+" << numeros[i];
    }
    cout << "\n";
    return 0;
}