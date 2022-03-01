#include <stdio.h>
char chainesaisie[255];
int decalage;
char direction;
char alphabet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','y','z'};


char *saisirchaine() {

    printf("Veuillez saisir une chaine");
    scanf(" %[^\n]s",chainesaisie);
    return chainesaisie;
}

int *saisirdecalage() {
    printf("Veuillez saisir le décalage");
    scanf("%d",&decalage);
    return &decalage;
}

char *saisirdirection() {
    printf("Veuillez saisir la direction");
    scanf(" %c",&direction);
    return &direction;
}
char *decalerPremiereLettre()
{
//1-récupérer le premier caractere de la chaine
//2-la retrouver dans l'alphabet
//3-Décaler de 1
//4-Récupérer le caractère décaler

}

int main() {
    printf("Hello, World!\n");
    return 0;
}
