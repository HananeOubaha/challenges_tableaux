#include <stdio.h>

int main() {
    int n,i,max;


    printf("Combien d'éléments souhaitez-vous entrer ? ");
    scanf("%d", &n);


    int T[n];


    printf("Veuillez entrer %d éléments :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &T[i]);

    }
    max=T[0];
    for (int i = 0; i < n; i++){
    if(T[i]>max)
    {
        max=T[i];
    }}
printf("le max : %d",max);


    return 0;
}
