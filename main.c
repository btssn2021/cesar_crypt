#include <stdio.h>
#include <string.h>

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
char firstchar=chainesaisie[0];
int positiontrouve=0;
//2-le retrouver dans l'alphabet
for(int i=0;i<strlen(alphabet);i++)
{
    if(alphabet[i]==firstchar)
    {
        positiontrouve=i;
        break;
    }
}
//3-Décaler de 1
chainesaisie[0]=alphabet[positiontrouve+1];
//4-Récupérer la chaine décalée
    return chainesaisie;
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
