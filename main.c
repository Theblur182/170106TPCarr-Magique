#include <stdio.h>
#include <stdlib.h>
#define TAILLE 5

//13012017 - TP CARRE MAGIQUE - MAXIME DORFFER

/*
BUT : Afficher un carr� magique, soit un tableau d'entiers � 2 dimensions dont toutes les lignes, colonnes et diagonales ont la m�me somme.
ENTREE : La taille du carr� magique est d�finie par les constantes donn�es dans le code. L'user n'entre aucune information.
SORTIE : Le carr� magique fonctionnel.
*/

//--------------------------------------------------------------------------------------------------------------------INITIALISER

typedef struct grid {                                               //type structur� pour le carr�

    int x;                                                          // l'abscisse
    int y;                                                          // l'ordonn�e

}grid;


void inittab (int tab2dim [TAILLE][TAILLE]);                        //initialisation de la proc�dure du tableau
void affichetab  (int tab2dim [TAILLE][TAILLE]);                    // initialisation de la proc�dure qui remplit le tableau, avec des z�ros
void avancertab  (int tab2dim [TAILLE][TAILLE]);                    // initialisation de la proc�dure qui permet de se d�placer dans le tableau (incomplet)


//-------------------------------------------------------------------------------------------------------------------PROGRAMME PRINCIPAL
int main ()
{
        int tab2dim [TAILLE][TAILLE];                               //appel de la proc�dure qui dessine le tableau
        inittab(tab2dim);                                           //appel de la proc�dure qui remplit le tableau
        affichetab(tab2dim);                                        //appel de la proc�dure qui affiche le tableau
        //avancertab(tab2dim);                                      // appel de la proc�dure (imcompl�te) qui permet de se d�placer dans le tableau

        return 0;
}


//-------------------------------------------------------------------------------------------------------------------PROCEDURES

void inittab (int tab2dim [TAILLE][TAILLE]){                         //proc�dure du tableau
    int i=0;
    int j=0;

    for (i=0 ;i<TAILLE;i++){
            for (j=0 ;j<TAILLE;j++){
                tab2dim[i][j]=0;
                    printf("%d", tab2dim[i][j]);                     //afficher le tableau, rempli de z�ros
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

void avancertab (int tab2dim [TAILLE][TAILLE]){                     // d�but de proc�dure pour se d�placer dans le tableau.
}
