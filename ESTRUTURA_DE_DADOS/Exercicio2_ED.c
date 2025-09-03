#include <stdio.h>

int quadrante (float r){
    int count=0;
    while (r > 360){
        r = r -360;
        count++;
    }
    if(r >= 0 && r < 90){
        printf("QUADRANTE: 1\n");
    }
    if(r >= 90 && r < 180){
        printf("QUADRANTE: 2\n");
    }
    if(r >= 180 && r < 270){
        printf("QUADRANTE: 3\n");
    }
    if(r >= 270 && r < 360){
        printf("QUADRANTE: 4\n");
    }
    printf("Numero de voltas: %d", count);
    return 1;

}
int main (){
    float R;
    scanf("%f", &R);
    if (!(R >= 0 && R <= 1000000000)){
        printf("Nao e possivel calcular");
        return 0;
    }

    quadrante(R);

    return 0;
}