/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    int matriz[num][num];
    for(int i = 0; i < num; i++){
        matriz[0][i] = 1;
        matriz[i][0] = 1;
    }
    for(int i = 1; i < num; i++){
        for(int k = 1; k < num; k++){
            matriz[i][k] = matriz[i-1][k] + matriz[i][k-1];
        }
    }
    
    cout << matriz[num-1][num-1];
    return 0;
}
