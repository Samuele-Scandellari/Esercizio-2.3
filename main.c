#include<stdio.h>
int main() {
    int ora1,ora2,minuti1,minuti2,secondi1,secondi2,differenza;
    printf("Controlla la differenza in secondi dei due orari: \ninserire l'ora del primo orario: ");
    scanf("%d",&ora1);
    printf("inserire gli orari del primo orario: ");
    scanf("%d", &minuti1);
    printf("inserire i secondi del primo orario: ");
    scanf("%d", &secondi1);
    printf("inserire l'ora del secondo orario: ");
    scanf("%d", &ora2);
    printf("inserire i minuti del secondo orario: ");
    scanf("%d", &minuti2);
    printf("inserire i secondi del secondo orario: ");
    scanf("%d", &secondi2);
    secondi1 +=ora1*3600 + minuti1*60;
    secondi2 +=ora2*3600 + minuti2*60;
    if(secondi1>=secondi2)
        differenza= secondi1-secondi2;
    else
        differenza= secondi2-secondi1;
    printf("differenza: %d secondi\n,differenza");
}
