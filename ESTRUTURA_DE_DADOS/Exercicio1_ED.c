#include <stdio.h>
#include <math.h>

    int validar(float a, float b, float c){
        if (a == 0){
            return 0;
        }
        if (!(a >= 0.1 && a <= 10.0)){
        printf("Impossivel de calcular!");
        return 0;
        }if (!(b >= -1000.0 && b <= 1000.0)){
        printf("Impossivel de calcular!");
        return 0;
        }if (!(c >= -1000.0 && c <= 1000.0)){
        printf("Impossivel de calcular!");
        return 0;
        }
        return 1;
    }
    int calcular_raizes(float a, float b, float c, float *d, float *e){
            float delta = (b * b) - (4 * a * c);
            if (delta < 0){
                return 0;
            }else{

                *d = (-b + sqrt(delta))/ (2*a);
                *e = (-b - sqrt(delta))/ (2*a);
                return 1;
    }
}
int main (){
    float a, b, c, d, e;
  
    scanf("%f  %f  %f", &a, &b, &c);
   

    if (!validar(a, b, c)){
        printf("IMPOSSIVEL DE CALCULAR\n");
        return 0;
    }
    if (calcular_raizes(a, b, c, &d, &e)){
        printf("Raiz 1: %.5f\n", d);
        printf("Raiz 2: %.5f\n", e);
    }else {
        printf("iMPOSSIVEL DE CALCULAR");
    }

    return 0;
}