#include "actions.h"

// Lib�re les transitions allou�es pour la table de l'automate
// automate (IN/OUT)- table de transitions de l'automate
void libererTransitions(struct lTransitions **automate)
{
    struct lTransitions *t = NULL;
    struct lTransitions *t1= NULL;
    int i = 0;

    // TODO - Parcours tous les �tats et lib�re les listes cha�n�es de transitions





}

// Cr�e une transition avec un character et un �tat final
// c  - caract�re de la transition
// e2 - �tat suivant apr�s la lecture du caract�re c
struct lTransitions *creerTransition(char c, int e2)
{
    struct lTransitions *t = NULL;
    // TODO - allouer la transition et assigner les valeurs



    return  t;
}

// Ajout une transition dans l'automate. La transition sera rajout�e par la t�te de la liste
// e1  - etat initial de la transition. L'�tat correspond � l'indice du tableau 'automate'
// t - transition
void ajouterTransition(struct lTransitions **automate, int e1, struct lTransitions *t)
{
// TODO - ajouter la transtion par la t�te de liste dans le tableau automate � l'index 'e1'. ATTENTION a maintenir l'int�gralit� de la liste cha�n�e


}

// Lecture du fichier et renseignement du table de transitions de l'automate
// automate (OUT)- table de transitions de l'automate
// etatInitial (OUT)- etat initial de l'automate
// etatFinal (OUT)- etat final de l'automate (on consid�re qu'il n'y a qu'un seul �tat pour cet exercice)
void lireFichier(struct lTransitions **automate, int *etatInitial, int *etatFinal)
{
    FILE *f = NULL; // repr�sente un fichier en C
    int e1, e2 ; // e1 etat initial d'une transition et e2 �tat final d'une transition
    char c; // caract�re d'une transition
    char tab[TAILLETAB]; // Cha�ne de caract�res qui nous servira pour la lecture ligne par ligne du fichier (~buffer de lecture)
    struct lTransitions *t = NULL; // Pointeur vers une transition

    // Ouverture du du fichier
    f = fopen("./automate.txt", "r");

    // V�rifier si le fichier a bien �t� ouvert. Sinon, envoyer une erreur et sortir du programme
    if (!f)
    {
       printf("Le fichier automate.txt n'a pas pu etre lu !");
	   fclose(f);
       exit(1);
    }

    fscanf(f, "#%d", &etatInitial); //  - Lecture de la premi�re ligne - l'�tat initial


    fscanf(f, "#%d", &etatFinal); //  - Lecture de la deuxi�me ligne - l'�tat final - On consid�re qu'il y a un seul �tat final pour notre exemple


    // Lecture de toutes les transitions de l'automate - Lit ligne par ligne jusqu'� la fin du fichier
    while (fgets(tab, TAILLETAB, f) != NULL)
    {
        fscanf(f, ("%d;%d;%d", &e1, &c, &e2)); //  - R�cup�rer dans les variables e1, c et e2 les valeurs lues dans le fichier et qui ont �t� stock�es dans tab � l'aide de la fonction sscanf()

        creerTransition(c, e2); //  - Cr�er une transition avec c et e2 (faire appel � des fonctions d�j� d�finies dans ce m�me fichier)

        ajouterTransition(automate, e1, t);//  - Ajouter la transition cr��e dans l'automate en utilisant e1 comme indice du tableau 'automate' (faire appel � des fonctions d�j� d�finies dans ce m�me fichier)

    }

    // Fermer le fichier
    fclose(f);
}


// Cherche une transsition dans une liste des transitions non tri�es.
//     Si la transition est trouv�e la fonction retourne l'�tat suivant
//     Sinon, elle renvoie -1 (signifie que le caract�re n'a pas �t� trouv� et donc qu'il n'y a pas de transition de cet �tat avec ce caract�re).
// t - liste cha�n�e de transitions
// c - caract�re recherch�
int chercherEtatSuivant(struct lTransitions *t,char c)
{
    struct lTransitions *t1 = t;
    int etatSuivant = -1;

    // TODO - boucle while tant qu'il y a des transitions ou que le caractere 'c' est trouv�






    return etatSuivant;
}

// Analyse du mot pat l'automate
// mot (IN) - mot � analyser
// automate (IN)- table de transitions de l'automate
// etatInitial (IN)- �tat initial de l'automate
// etatFinal (IN)- �tat final de l'automate (on consid�re qu'il n'y a qu'un seul �tat pour cet exercice)
// Code de retour de la fonction - 0 = mot valide; 1 = mot non valide=erreur
short analyse(char *mot, struct lTransitions **automate, int etatInitial, int etatFinal)
{
    int i = 0; // Compteur
    char c; // caract�re temporaire
    short cdr = 1; // code de retour - 1=ERREUR OU NON  VALIDE; 0=VALIDE
    int etatSuivant; // etat suivant
    int tailleMot; // taille du mot

    // On initialise l'�tat suivant � l'�tat initiale
    etatSuivant = etatInitial;

    // TODO - On calcule la taille du mot


    // Boucle pour chaque caract�re du mot
    for (; i<tailleMot; i++)
    {
        // TODO - On aasigne le caract�re courant � 'c'

        // TODO - Chercher la transition dans automate[etatInitial] avec la fonction chercherEtatSuivant()

        // Si aucune transition n'est trouv�e (etatSuivant est -1) sortir de la boucle
        if (etatSuivant<0)
            break;

        // TODO - V�rifier si nous sommes dans l'�tat final et changer la valeur de cdr si le mot est valide


    }

    return cdr;
}
