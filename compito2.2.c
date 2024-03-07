#include <stdio.h>

int main()  {
    int num1, num2;
    float media;

    printf("inserisci il primo numero intero: ");
    scanf("%d", &num1);

    printf("inserisci il secondo numero intero: ");
    scanf("%d", &num2);

    media = (num1 + num2) / 2.0; // Calcolo della media aritmetica 

    printf("La media aritmetica di %d e %d è: %.2f\n", num1, num2, media);

    return 0;
    

}
