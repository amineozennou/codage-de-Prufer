#include<stdio.h>
#include<stdlib.h>


#include"graph.h"

int main(){
    
    cell **g=NULL;
    int n,k,i,alpha;
    char l='n';
    printf("Donner le nombre d'elements de graph:\n");
    scanf("%d",&n);
    g=creerG(n);
    int f[n],c[n];
    printf("Le graph est orientee?:");
    getchar();
    scanf("%c",&l);
    remplirG(g,n);
    printf("Le nombre d'arete de graph G est :%d\n",arete(g,n,l));
    affiche_graph(g,n);
    int beta=ensemble_feuilles(g,f,n);
    printf("F={");
    for(i=1;i<=beta;i++){
        printf("%d , ",f[i]);
    } printf("}");
    alpha=prufer(g,c,n,l);
    printf("\nC={");
    for(i=1;i<alpha;i++){
        printf("%d  ",c[i]);
    } printf("}");
}
