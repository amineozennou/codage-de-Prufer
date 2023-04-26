#include<stdio.h>
#include<stdlib.h>

#include"list.h"

cell *creer(){
    cell* c;
    c=(cell*)malloc(sizeof(cell));
    c->lien=NULL;
    return c;
}
void remplir(cell* c){
   int x;
   printf("Donner un entier"); scanf("%d",&x);
   (*c).val=x;
}

void afficher(cell* c){
   cell *p=c;
   while(p!=NULL){ printf("%d   ",p->val); p=p->lien;}
   printf("\n");
}
int longeur(cell *c){
    cell *p=c;
    int i=0;
    while(p!=NULL){ i++; p=p->lien;}
    return i;
}
cell *inserer_debut(cell *list,cell *c){
     c->lien=list;
     list=c;
     return list;
}
cell *rechercher(int x,cell *c){
    cell *p=c;
    while((p!=NULL) && ((*p).val!=x)){ p=p->lien;}
    if(p==NULL){ return NULL;}
    return p;
}
cell *supprimer(int x,cell *c){
    cell *pp=NULL,*p=c,*l;
    while((p!=NULL) && ((*p).val!=x)){ pp=p; p=p->lien;}
    if((*c).val==x){
         l=c;  c=c->lien; free(l); return c;
    }
    if(pp->lien==NULL){
          return c;
    }
    else{
       l=pp->lien;
       pp->lien=l->lien;
       free(l);
       return c;
    }
}
cell *inserer(cell *c, cell *list){
    int x=list->val;
    cell *pp=NULL,*p=c,*l;
    if(list==NULL){ return c;}
    if((c==NULL) || (c->val <=x)){ return inserer_debut(c,list);}
    else{ while((p!=NULL) && (p->val >x)){ pp=p; p=p->lien;}}
    l=pp->lien;
    pp->lien=list;
    list->lien=l;
    return c;
}
cell *inserer_fin(cell *c,cell *list){
   if(c==NULL){ c=list;} 
   else{ cell *p=c;
   while(p->lien!=NULL){ p=p->lien;}
   p->lien=list;}
   return c;
}

/*cell *inverese(cell *c){
    cell *pp=NULL,*p=c,*k=NULL,*b=NULL;
    if(c==NULL){ printf("La list est vide\n"); return c;}
    if(c->lien==NULL){ return c;}
    while(p->lien!=NULL){
        p=p->lien;
    }//1!
    b=p;
    p=c;
    while(c->lien!=k){
        while(p->lien!=k){
        pp=p; p=p->lien;
        }
        k=p;
        p->lien=pp;
    }
    c->lien=NULL;
    c=b;
    return c;
}*/
cell *inverese(cell *c){
    cell *pp=NULL,*p=c,*l=NULL;
    while(p!=NULL){
        l=p->lien;
        p->lien=pp;
        pp=p;
        p=l;
    }
    c=pp;
    return c;
}

