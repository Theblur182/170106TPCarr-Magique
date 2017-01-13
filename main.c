#include <stdio.h>
#include <stdlib.h>
#define TAILLE 5

//13012017 - TP CARRE MAGIQUE - MAXIME DORFFER

/*
BUT : Afficher un carré magique, soit un tableau d'entiers à 2 dimensions dont toutes les lignes, colonnes et diagonales ont la même somme.
ENTREE : La taille du carré magique est définie par les constantes données dans le code. L'user n'entre aucune information.
SORTIE : Le carré magique fonctionnel.
*/

//--------------------------------------------------------------------------------------------------------------------INITIALISER

typedef struct grid {                                               //type structuré pour le carré

    int x;                                                          // l'abscisse
    int y;                                                          // l'ordonnée

}grid;


void inittab (int tab2dim [TAILLE][TAILLE]);                        //initialisation de la procédure du tableau
void affichetab  (int tab2dim [TAILLE][TAILLE]);                    // initialisation de la procédure qui remplit le tableau, avec des zéros
void avancertab  (int tab2dim [TAILLE][TAILLE]);                    // initialisation de la procédure qui permet de se déplacer dans le tableau (incomplet)


//-------------------------------------------------------------------------------------------------------------------PROGRAMME PRINCIPAL
int main ()
{
        int tab2dim [TAILLE][TAILLE];                               //appel de la procédure qui dessine le tableau
        inittab(tab2dim);                                           //appel de la procédure qui remplit le tableau
        affichetab(tab2dim);                                        //appel de la procédure qui affiche le tableau
        //avancertab(tab2dim);                                      // appel de la procédure (imcomplète) qui permet de se déplacer dans le tableau

        return 0;
}


//-------------------------------------------------------------------------------------------------------------------PROCEDURES

void inittab (int tab2dim [TAILLE][TAILLE]){                         //procédure du tableau
    int i=0;
    int j=0;

    for (i=0 ;i<TAILLE;i++){
            for (j=0 ;j<TAILLE;j++){
                tab2dim[i][j]=0;
                    printf("%d", tab2dim[i][j]);                     //afficher le tableau, rempli de zéros
            }
            printf("\n");                                            //saut de ligne pour finir.
        }
    }

void affichetab (int tab2dim [TAILLE][TAILLE]){
    int i, j;

    for(i=0;i<TAILLE;i++){
            for(j=0;j<TAILLE;j++){
                    printf("%d             ",tab2dim[i][j]);
            }
            printf("\n");                                           //saut de ligne pour finir.
        }
    }

void avancertab (int tab2dim [TAILLE][TAILLE]){                     // début de procédure pour se déplacer dans le tableau.
}
