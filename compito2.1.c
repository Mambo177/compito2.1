#include <stdio.h>

/*
si scriva un programma che esegua l'operazione di moltiplicazione tra due i fattori inseriti dall'utente
*/

int main() {
    int moltiplicando, moltiplicatore;
int prodotto;
    // input dei due fattori dall'utente;
    printf("inserisci il moltiplicando: ");
    scanf("%d", &moltiplicando);

    printf("inserisci il moltiplicatore: ");
    scanf("%d", &moltiplicatore);

    // calcolo della moltiplicazione
    prodotto = moltiplicando * moltiplicatore;

    //visualizzazione del prodotto
    printf("il risultato della moltiplicazione è: %d\n", prodotto);

    return 0;
}