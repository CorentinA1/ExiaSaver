#include <stdio.h>
#include <stdlib.h>
#include <time.h> //librairie du random
#include <string.h> //pour les statistique
#include <unistd.h>
#include "lanceur.h"
int getkill()
{
    int c;

    system("stty cbreak -echo");
    c = getchar();
    system("stty cooked echo");

    system("clear");

    return c;
}
void afficherInfo() // afficher les info dans la console 

{ 
// cette fonction affiche le fichier statitique 
system("cat /home/aniki/Bureau/Projet/Lanceur/log.txt"); 
} 


void afficherfinInfo() 

{ 
// cette fonction affiche les derniere ligne du fichier statitique 
	system("tail /home/aniki/Bureau/Projet/Lanceur/log.txt"); 
}
void menustat() 
{ 
	char menu='0'; 
	char choixmenustat; 
	while (menu=='0') 
		{ 
			choixmenustat = '0'; 
			printf("\n\n\n Bienvenue dans le menu statistique du eXiasaver"); 
			printf("\n Pour lire l'entierete du log tapez 1"); 
			printf("\n Pour lire les dix dernieres lignes du log tapez 2"); 
			printf("\n Que voulez-vous faire ? :"); 
			fflush(stdin); 
			scanf(" %c",&choixmenustat); 
			if (choixmenustat=='1') 
				{ 
					afficherInfo(); 
				} 
				else if (choixmenustat=='2') 
					{ 
						afficherfinInfo(); 
					} 
					else 
						{ 
							printf ("vous avec inserer un mauvais caractere\n"); 
						} 
						menu=0; 
						/*printf("\n Pour revenir au menu principal tappez 0 ou bien tappez une autre 
		touche afin de quitter le programme :"); */	
						int getkill(); 
					} 
				}

int main(int argc, char* argv[])
{
	system("clear") ;
	
    char *arguments[] = { "main", NULL };/* Tableau de char contenant les arguments (là aucun : le nom du
       									  programme et NULL sont obligatoires)  */
   	srand(time(NULL)); //random

	int nbgen=rand()%3+1;    //entre 1-3
	
	//nbgen=1; //pour des test
	save(nbgen);

    
        if (argc==2 && strcmp(argv[1],"-stat")==0)
        {
            menustat();
        }
        else
        {
       

if (nbgen ==1)
	
	{

		printf("statique\n"); //affichage de statique
		if (execv("/home/aniki/Bureau/Projet/Statique/main", arguments) == -1) 
			{
				perror("execv");
        		return EXIT_FAILURE;
    		}

	}

else if (nbgen==2)
	
	{

		printf("dynamique\n");
		//execv("statique");
	}

else if (nbgen==3)
	
	{
		printf("interactif");
	
	}
	
	getchar();
	system("clear");
	return 0;
}
}
