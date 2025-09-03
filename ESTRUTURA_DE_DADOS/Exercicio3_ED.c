#include <stdio.h>

double aprox_pi(int x){
    double soma_da_serie = 0.00;
    double denominador = 1.00;
    int sinal = 1;

    for (int i=0; i < x; i++){
        soma_da_serie += sinal / denominador;
        denominador += 2;
        sinal *= -1;

    }
    return (soma_da_serie * 4);

}
int main (){
    int n;
    scanf("%d", &n);

    if (n <= 0 ){
        printf("Numeros de termos invalido. Deve ser maior ou igual a 1\n");
        return 0;
    }else{
    double pi= aprox_pi(n);
    printf("A aproximacao de pi= %.5f", pi);
    }
    return 0;
}