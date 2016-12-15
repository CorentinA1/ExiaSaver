#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h> //librairie du random
#include "statique.h"

int getkill()
{
    int c;

    system("stty cbreak -echo");
    c = getchar();
    system("stty cooked echo");

    system("clear");

    return c;
}


int main(int argc, char* argv[])
{
	system("clear");
	//printf("je suis dans le statique\n"); //procedure de test

	FILE* fichier = NULL;

	int i;
	int caractereLu, ligne;
	char c;
	char a = 240;
	char b = 219;
	int x;


 	

	srand(time(NULL)); //random
	int genImage=rand()%4+1; //entre 1 et 5

	if (genImage==1)
		{
			fichier = fopen("/home/aniki/Bureau/Projet/Statique/Image/Image1.pbm", "r+");
			//printf("1\n");
		}
	else if (genImage==2)
    	{
    		fichier = fopen("/home/aniki/Bureau/Projet/Statique/Image/Image2.pbm", "r+");
    		//printf("2\n");
		}
    else if (genImage==3)
    	{
    		fichier = fopen("/home/aniki/Bureau/Projet/Statique/Image/Image3.pbm", "r+");
    		//printf("3\n");
    	}
    else if (genImage==4)
    {fichier = fopen("/home/aniki/Bureau/Projet/Statique/Image/Image4.pbm", "r+");}
    
    //else if (genImage==5)
    {fichier = fopen("/home/aniki/Bureau/Projet/Statique/Image/Image5.pbm", "r+");}



	if (fichier != NULL)
	{
		while(caractereLu != EOF && ligne < 3  )
		{
			caractereLu = fgetc(fichier);
			if (caractereLu =='\n')
			{ligne ++;}
	}

		while (i<1000)
		{

			x = fgetc(fichier);
			switch (x)
			{
			case 48:
				printf("%c" ,a);
				break;
			case 49:
				printf("%c" ,b);
				break;
			case 13:
				printf("\n");
				break;
			default:
				break;
			}

			i++;
		}
		fclose(fichier);

	}
	getkill();					
	

}






