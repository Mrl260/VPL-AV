#include <stdio.h>

valorbinario(int num){
    int resto, posicao=1, i=0, TAM=0;
    int binario[31];

    while(num){
    TAM++;
    resto        = num%2;
    num          = num/2;
    binario[TAM] = resto;
    posicao      = posicao*10;
    }

    for(i=TAM; i>0; i--){
        printf("%d", binario[i]);
    }
}

valoroctal(int num){
    int resto, posicao=1, i=0, TAM=0;
    int octal[31];

    while(num){
    TAM++;
    resto      = num%8;
    num        = num/8;
    octal[TAM] = resto;
    posicao    = posicao*10;
    }

    for(i=TAM; i>0; i--){
        printf("%i", octal[i]);
    }
}

valorhexa(int num){
    int resto, posicao=1, i=0, TAM=0;
    int hexa[31];

    while(num){
    TAM++;
    resto     = num%16;
    num       = num/16;
    hexa[TAM] = resto;
    posicao   = posicao*10;
    }

    for(i=TAM; i>0; i--){
        if(hexa[i]>9){
            switch(hexa[i]){
            case 10: printf("A");break;
            case 11: printf("B");break;
            case 12: printf("C");break;
            case 13: printf("D");break;
            case 14: printf("E");break;
            case 15: printf("F");break;
            }
        }
        else{
        printf("%i", hexa[i]);
        }
    }
}

int main(){
    float num;
    int base;
    scanf("%f %i", &num, &base);
    switch(base){
        case 2: valorbinario(num);
            break;
        case 8: valoroctal(num);
            break;
        case 16: valorhexa(num);
            break;
}
    return 0;
}
