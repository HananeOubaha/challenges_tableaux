#include <stdio.h>

int main() {
    int n,i;


    printf("Combien d'éléments souhaitez-vous entrer ? ");
    scanf("%d", &n);


    int T[n];


    printf("Veuillez entrer %d éléments :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &T[i]);
    }
    int facteur;
    printf("entrer le facteur de mult");
    scanf("%d",&facteur);
    for(i=0;i<n;i++){
        printf("%d  * %d = %d\n",T[i],facteur,T[i]*facteur);
    }


    return 0;
}

