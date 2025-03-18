#include <iostream>
#include <string.h>
using namespace std;
 
int main(){
    int num, x = 0;
    cin >> num;
    char comando[4];
    for(int i = 0; i < num; i++){
        cin >> comando;
        if(!strcmp(comando, "X++") || !strcmp( comando, "++X")) x += 1;
        else if(!strcmp(comando, "X--") || !strcmp( comando, "--X")) x -= 1;
    }
    cout << x;
    return 0;
}























