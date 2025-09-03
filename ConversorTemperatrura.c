/*Conversor de Temperaturas:
Criar um programa que usa ponteiros de funções para converter temperaturas entre Celsius, Fahrenheit e Kelvin.
 */
#include <stdio.h>

double CelForFah (double n){
    n = ((n * 9/5) + 32);
    return n;
}
double CelForKel (double n){
    n = n + 273.15;
    return n;
}
double FahForCel (double n){
    n = (n - 32) * (5/9);
    return n;
}
double FahForKel (double n){
    n = ((n - 32) * (5/9)) + 273.15;
    return n;
}
double KelForCel (double n){
    n = n - 273.15;
    return n;
}
double KelForFah (double n){
    n = ((n - 273.15) * 9/5) + 32;
    return n;
}

int main (){
    double temperatura, temperatura_out;
    int escolha;
    double (*ponteiroConversor)(double);
    //MENU

    printf("----------CONVERSOR DE TEMPERATURA----------\n");
    printf("1-CELCIUS PARA FAHREHEIT:\n");
    printf("2-CELCIUS PARA KELVIN:\n");
    printf("3-FAHRENHEIT PARA CELCICIUS:\n");
    printf("4-FAHRENHEIT PARA KELVIN:\n");
    printf("5-KELVIN PARA CELCIUS:\n");
    printf("6-KELVIN PARA FAHRENHEIT:\n");
    printf("DIGITE QUAL CONVERSAO VOCE QUER FAZER: ");
    scanf("%d", &escolha);
    printf("----------------------------\n");
    printf("\nDIGITE A TEMPERATURA: ");
    scanf("%lf", &temperatura);






    if (escolha == 1){
        ponteiroConversor = CelForFah;
    }
    else if (escolha == 2){
        ponteiroConversor = CelForKel;
    }
    else if (escolha == 3){
        ponteiroConversor = FahForCel;
    }
    else if (escolha == 4){
        ponteiroConversor = FahForKel;
    }
    else if (escolha == 5){
        ponteiroConversor = KelForCel;
    }
    else if (escolha == 6){
        ponteiroConversor = KelForFah;
    }
    else {
      printf("OPCAO INVALIDA");
        return 1;
    }

    temperatura_out = ponteiroConversor(temperatura);
    printf("\nRESULTADO: %.2f", temperatura_out);
    return 0;
}