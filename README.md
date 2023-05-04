# codage de Prufer
Bonjour tout le monde dans mon premier repository qui rédigé le codage de pufer dans les arbres qui sont créés avec les graphes avec les listes d'adjacents, L'algorithme de ce codage est le suivant :

## Pour le codage
```
Soit(X,T) un arbre X={1,2,....,n}
TantQue l'arbre a plus d'arête faire
    Chercher la feuille qui a le n le plus élevé
	Ecrire le numéro du sommet auquel elle relie
	Enlever cette feuille
Fin TantQue
```
## Pour le décodage
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
### Example

![Untitled](https://user-images.githubusercontent.com/102986762/236336610-a0d944cb-a865-4c17-88e8-cbc6059a0fd1.png)


![pika-1683236370510-1x](https://user-images.githubusercontent.com/102986762/236336463-eadae4ad-b5ab-47de-b319-56450da634ae.png)


![pika-1683235466992-1x](https://user-images.githubusercontent.com/102986762/236335061-d51c01df-8565-4586-beeb-d02a622f531e.png)
