#include <stdio.h>

int main()
{
    int i, j, TAM, d=0, n=0;
    scanf("%i", &TAM);
    float m[TAM][TAM];

    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            scanf("%f", &m[i][j]);
        }
    }
    for(i=0;i<TAM; i++){
        for(j=0;j<TAM; j++){
            if(m[i][j]==0){
                n++;
            }
}
            if(m[i][i]==1){
                d++;
            }
}
    if(d==TAM && n==(TAM*TAM)-TAM){
        printf("matriz identidade");
   return 0;}
    if(n==(TAM*TAM)){
        printf("matriz zero");
   return 0;}
   printf("nenhuma das opcoes");
}
