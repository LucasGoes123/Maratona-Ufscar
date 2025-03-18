#include <stdio.h>
#include <stdlib.h>

int main(){    	
    // Seu código vai aqui
    int lampada1, lampada2, quant, I;
    lampada1 = lampada2 = 0;
    scanf("%d", &quant);
    for(int i = 0; i < quant; i++){
        scanf("%d", &I);
        if(I == 1){
            if(lampada1 == 0) lampada1 = 1;
            else lampada1 = 0;
        }else{
            if(lampada1 == 0) lampada1 = 1;
            else lampada1 = 0;
            if(lampada2 == 0) lampada2 = 1;
            else lampada2 = 0;
        }
    }
    printf("%d\n%d\n", lampada1, lampada2);
    return 0;
}