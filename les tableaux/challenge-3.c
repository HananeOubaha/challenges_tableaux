#include <stdio.h>

int main() {
    int n,i,s=0;


    printf("Combien d'�l�ments souhaitez-vous entrer ? ");
    scanf("%d", &n);


    int T[n];


    printf("Veuillez entrer %d �l�ments :\n", n);
    for (int i = 0; i < n; i++) {
        printf("�l�ment %d : ", i + 1);
        scanf("%d", &T[i]);
        s=s+T[i];
    }
printf(" la somme totale = %d",s);


    return 0;
}


