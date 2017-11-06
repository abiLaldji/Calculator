#include "entreeSortie.h"


// Lecture du fichier contenant les Dates � tester
// tableauDatesRetour (IN/OUT) - tableau de pointeurs vers de cha�nes de caract�res
void lireFichierDates(char **tableauDatesRetour)
{
    FILE *f = NULL; // repr�sente un fichier en C
    char tailleLigne[TAILLE] = ""; // création d'un tableau de taille TAILLE du fichier .h de taille 100
    char tab[TAILLE]; // Cha�ne de caract�res qui nous servira pour la lecture ligne par ligne du fichier (~buffer de lecture)
    int i = 0; // index du tableau


    f = fopen("./HeuresTests.txt", "r"); //: Ouverture du du fichier HeuresTests.txt

    //:  Vérifier si le fichier a bien été ouvert. Sinon, envoyer une erreur et sortir du programme
     if (f != NULL) {

       while (fgets(tailleLigne, TAILLE, f) != NULL)
        {
          printf("%s", f);//: Lecture de toute les lignes jusqu'à la fin de fichier  // Attention aux caractères \n à la fin de la chaine, il faut les supprimer
        }

       fclose(f);
     } else {

       printf("Impossible d'ouvrir le fichier HeuresTests.txt");
       fclose(f);
     }
       fclose(f); //: Fermer le fichier
  }




// Ecrit le mot dans le fichier avec le flag OK ou KO
// f (IN) - code de retour : 0 le mot est valide; 1 le mot est non valide (=erreur ou non reconnu par l'automate)
// cdr (IN) - code de retour : 0 le mot est valide, �crire OK; 1 le mot est non valide (=erreur ou non reconnu par l'automate), �crire KO
// mot (IN) - mot analys�
//
// La ligne dans le fichier doit �tre �crite une par ligne comme �a :
// date OK\n (pour une date valide)
// date KO\n  (pour une date NON valide)
void ecrireResultat(FILE *f,short cdr, char *mot)
{

    if (cdr){
      fprintf("%s KO\n", f, mot);
      printf("%s KO\n", mot );
    } else {
      fprintf("%s OK\n", f, mot);
      printf("%s OK\n", mot );
    }

     //: Afficher le resultat dans la console
}
