#include <stdio.h>

int preencher(float v[], int TAM){
    int i;
    for(i=0; i<TAM; i++){
        scanf("%f", &v[i]);
    }
}

int conta(float v[], int TAM){
    int i, c=0;
    for(i=0; i<TAM; i++){
        if(v[i]>0 && (int)v[i]%2!=0){
            c++;
        }
    }
    return c;
}

float soma(float v[], int TAM, int y){
    int i;
    float s=0;
    for(i=0; i<TAM; i++){
        if(v[i]>0){
            s=s+v[i];
        }
        if(v[i]<0 && (int)v[i]==y){
            s=s+v[i];
        }
 }
    return s;
}


int main(void) {
	float v[10] = {1,2,-3,4,5,6,7,8,-9,8};
	int x, y;

	scanf("%i %i", &x, &y);

	if (x != 9) {
		preencher(v, 10);
		printf("%i", conta(v,10));
	} else {
		printf("%f", soma(v,10,y));
	}

	return 0;
}
