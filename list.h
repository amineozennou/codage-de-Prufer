#include<stdio.h>
#include<stdlib.h>

typedef struct cell{
    int val;
    struct cell *lien;
} cell;
cell *creer(void);
void remplir(cell*);
void afficher(cell*);
int longeur(cell*);
cell *inserer_debut(cell*,cell*);
cell *rechercher(int,cell*);
cell *supprimer(int,cell*);
cell *inserer(cell*,cell*);
cell *inserer_fin(cell*,cell*);
cell *inverese(cell*);
