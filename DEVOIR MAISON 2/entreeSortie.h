#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constante - Taille du tableau de caract�res pour la lecture des mots
#define TAILLE 100

// Lecture du fichier contenant les Dates � tester
// tableauDatesRetour (IN/OUT) - tableau de pointeurs vers de cha�nes de caract�res
void lireFichierDates(char **tableauDatesRetour);


// Ecrit le mot dans le fichier avec le flag OK ou KO
// f (IN) - code de retour : 0 le mot est valide; 1 le mot est non valide (=erreur ou non reconnu par l'automate)
// cdr (IN) - code de retour : 0 le mot est valide, �crire OK; 1 le mot est non valide (=erreur ou non reconnu par l'automate), �crire KO
// mot (IN) - mot analys�
//
// La ligne dans le fichier doit �tre �crite une par ligne comme �a :
// date OK\n (pour une date valide)
// date KO\n  (pour une date NON valide)
void ecrireResultat(FILE *f,short cdr, char *mot);
