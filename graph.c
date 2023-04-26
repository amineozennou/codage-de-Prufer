#include<stdio.h>
#include<stdlib.h>

#include"list.h"

void affiche_graph(cell**,int);

cell **creerG(int x){
    cell **g;
    g=(cell**)malloc(sizeof(cell*));
    for(int i=1;i<=x;i++){
        g[i]=(cell*)malloc(sizeof(cell));
        g[i]->lien=NULL;
        g[i]=(cell*)NULL;
    }
    return g;
}

void remplirG(cell **g,int n){
    cell *c,*p;
    int x;
    printf("\n(Pour finie l'initialisation entre 0)\n");
    for(int i=1;i<=n;i++){
        g[i]=(cell*)NULL;
        x=0;
        printf("%d -->\n",i);
        do{
            scanf("%d",&x);
            if(x!=0){
                c=creer();
                c->val=x;
                g[i]=inserer_fin(g[i],c);
            }
        }while(x!=0);
    }
}

int arete(cell **g,int n,char l){
    int x=0;
    for(int i=1;i<=n;i++){
        x+=longeur(g[i]);
    }
    if(l=='o' || l=='O') return x;  //Condition de parametre pour les graphs oriente et non oriente
    return x/2;
}


int ensemble_feuilles(cell **g,int f[],int n){
    int c=0;
    for(int i=1;i<=n;i++){
        if(longeur(g[i])==1){
            c++;
            f[c]=i;
        }
    }
    return c;
}

int prufer(cell **g,int c[],int n,char pr){
    cell **p=g;
    int ar=arete(g,n,pr);
    int f[n],l=1;
    int k=ensemble_feuilles(g,f,n);
    while(ar!=1){
        for(int i=1;i<=n;i++){
            if(rechercher(f[k],g[i])!=NULL){
                c[l]=i;
                l++;
                g[i]=supprimer(f[k],g[i]);
                g[f[k]]=supprimer(i,g[f[k]]);
                k=ensemble_feuilles(g,f,n);
                ar=arete(g,n,pr);
            }
        }
    }
    return l;
}

void affiche_graph(cell **g,int n){
    printf("\n");
    for(int i=1;i<=n;i++){
        printf("%d-->  ",i);
        afficher(g[i]);
    }
    printf("\n");
}

void inverser_graph(cell **g,cell **gi,int n){
    cell *z=NULL,*l=NULL;
    for(int i=1;i<=n;i++){
        l=creer();
        l->val=i;
        z=g[i];
        while(z!=NULL){
            gi[z->val]=inserer_fin(gi[z->val],l);
            z=z->lien;
        }   
    }
}

