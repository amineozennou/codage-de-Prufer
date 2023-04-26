#include<stdio.h>
#include<stdlib.h>

#include"list.h"


cell **creerG(int);
void remplirG(cell**,int);
int arete(cell**,int,char);
int ensemble_feuilles(cell**,int*,int);
int prufer(cell**,int*,int,char);
void affiche_graph(cell**,int);
void inverser_graph(cell**,cell**,int);
int profondeur(cell**,int,int,int*);