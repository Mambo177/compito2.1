#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Introduzione Gioco Quiz QI Domanda/Risposta
void presentazione() {
    printf("Benvenuto al Quiz QI domanda/risposta!\n");
    printf("Rispondi alle domande per accumulare punti!\n");
}

// Funzione per iniziare una nuova partita
void nuova_partita() {
    char nome[50];
    int punteggio = 0;

    printf("Inserisci il tuo nome: ");
    scanf("%s", nome);

    // Domande
    printf("\nDomanda 1: Chi ha scritto 'Romeo e Giulietta'?\n");
    printf("A) William Shakespeare\nB) Charles Dickens\nC) Jane Austen\n");
    char risposta1;
    printf("Risposta: ");
    scanf(" %c", &risposta1);
    if (risposta1 == 'A' || risposta1 == 'a') {
        punteggio++;
    }

    printf("\nDomanda 2: Quale pianeta è il più grande del sistema solare?\n");
    printf("A) Terra\nB) Giove\nC) Marte\n");
    char risposta2;
    printf("Risposta: ");
    scanf(" %c", &risposta2);
    if (risposta2 == 'B' || risposta2 == 'b') {
        punteggio++;
    }

    printf("\nDomanda 3: Quale è l'organo più grande del corpo umano?\n");
    printf("A) Fegato\nB) Cuore\nC) Pelle\n");
    char risposta3;
    printf("Risposta: ");
    scanf(" %c", &risposta3);
    if (risposta3 == 'C' || risposta3 == 'c') {
        punteggio++;
    }

    // Mostra punteggio finale
    printf("\n%s, hai totalizzato %d punti!\n", nome, punteggio);
}

int main() {
    char scelta;

    presentazione();

    do {
        // Menu di scelta
        printf("\nScegli:\n");
        printf("A) Iniziare una nuova partita\n");
        printf("B) Uscire dal gioco\n");
        printf("Scelta: ");
        scanf(" %c", &scelta);

        switch (scelta) {
            case 'A':
            case 'a':
                nuova_partita();
                break;
            case 'B':
            case 'b':
                printf("Arrivederci!\n");
                break;
            default:
                printf("Scelta non valida. Riprova.\n");
        }
    } while (scelta != 'B' && scelta != 'b');

    return 0;
}

