#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "actions.h"
#include "entreeSortie.h"

// Fonction principale main
// argc - nombre d'arguments pass�s dans argv
// argv - tableau d'arguments pass�s lors du lancement du programme ex�cutable

// "Automate de lecture des heures\n"
// "Format disponible : hh:mm:ss -> hh de 00-23, mm et ss de 00-59\n"

int main(int argc, char *argv[])
{
    int i = 0; // compteur pour la boucle
    struct lTransitions *automate[NBETATS]; // Tableau de pointeurs vers listes des transitions d'�tat
    int etatInitial, etatFinal; // variables que contiendront l'�tat initial et final de l'automate - lues dans le fichier
    short cdr; // code de retour
    char *tableHeuresTests[NBTEST]; // tableau de heures
    FILE *fout = NULL; // fichier r�sultat des tests

    for(i = 0; i < NBETATS; i++) {// : Initialiser tous les �l�ments de la tableau 'automate' � NULL

      automate[i] = NULL;
    }

    for(i = 0; i < NBTEST; i++) {//  : Initialiser tous les �l�ments de la tableau de test 'tableDatetests' � NULL

        tableHeuresTests[i] = NULL;
      }

    lireFichier(automate, &etatInitial, &etatFinal); // : Lecture du fichier "automate.txt" (utiliser les fonctions d�j� d�finies)

    lireFichierDates(tableHeuresTests); // : Lire fichier de donn�es de test "HeuresTests.txt" (utiliser les fonctions d�j� d�finies)

    // Ouvrir le fichier de r�sultats en �criture
    fout = fopen("./ResultatsHeuresTests.txt", "w");
    if (fout != NULL) { //: V�rifier si le fichier a bien �t� ouvert. Sinon, envoyer une erreur et sortir du programme

    printf("%s", fout); //  : Initialiser la lecture du tableau de heures de tests

  } else {
    printf("Impossible d'ouvrir le fichier ResultatsHeuresTests.txt");
    fclose(fout);
  }
    while (fgets(tableHeuresTests, NBTEST, fout) != NULL)
    {
       cdr = analyse(mot, automate, etatInitial, etatFinal); //  - Analyser ce mot avec l'automate (faire appel � des fonctions d�j� d�finies)

       ecrireResultat(fout, cdr, mot); //  - Ecrire le r�sultat de l'analyse dans le fichier r�sultats (faire appel � des fonctions d�j� d�finies)
    }

    libererTransitions(automate); // - Lib�rer les transitions, qui sont les structures dynamiques de l'automate (faire appel � des fonctions d�j� d�finies)

    fclose(fout); //  : Fermer le fichier de r�sultats

    return 0;
}
