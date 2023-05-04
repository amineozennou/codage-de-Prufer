# codage de Prufer
Bonjour tout le monde dans mon premier repository qui rédigé le codage de pufer dans les arbres qui sont créés avec les graphes avec les listes d'adjacents, L'algorithme de ce codage est le suivant :

# Pour le codage
```
Soit(X,T) un arbre X={1,2,....,n}
TantQue l'arbre a plus d'arête faire
    Chercher la feuille qui a le n le plus élevé
	Ecrire le numéro du sommet auquel elle relie
	Enlever cette feuille
Fin TantQue
```
# Pour le decodage
```
TantQue C<>mot vide faire
    relier Fk a x=c[1]
	supprimer Fk de F
	supprimer c[1]
	si x n'est pas plus une occurrence de C alors
	    F <- F U {x}
    Trier F
Fin TantQue
Relier les 2 elss qui restant
 ```

