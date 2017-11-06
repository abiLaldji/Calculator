#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constante - Taille du tableau de caracteres pour la lecture des mots
#define TAILLETAB 100
// Constante - Nombre maximum d'etats de l'automate
#define NBETATS 100
// Constante - Nombre maximum de tests
#define NBTEST 100

// Structure de donnees qui represente une transition avec un caractere et un etatSuivant.
// La structure sera geree avec une liste chainee avec "next"
struct lTransitions {
    char c;
    int etatSuivant;
    struct lTransitions *next;
};

// Lecture du fichier et renseignement du table de transitions de l'automate
// automate (OUT)- table de transitions de l'automate
// etatInitial (OUT)- etat initial de l'automate
// etatFinal (OUT)- etat final de l'automate (on considere qu'il y a un seul etat pour cet exercice)
void lireFichier(struct lTransitions **automate, int *etatInitial, int *etatFinal);

// Analyse du mot pat l'automate
// mot (IN) - mot a analyser
// automate (IN)- table de transitions de l'automate
// etatInitial (IN)- etat initial de l'automate
// etatFinal (IN)- etat final de l'automate (on considere qu'il y a un seul etat pour cet exercice)
// Code de retour de la fonction - 0 = mot valide; 1 = mot non valide=erreur
short analyse(char *mot, struct lTransitions **automate, int etatInitial, int etatFinal);

// Libere les transitions allouees pour la table de l'automate
// automate (IN/OUT)- table de transitions de l'automate
void libererTransitions(struct lTransitions **automate);

void Transiton (char *tableHeuresTest[NBTEST], struct lTransitions **automate, int *etatInitial, int *etatFinal);
