#include "statique.h"

/*char* choisirUneImage()
{

    char* chemin = malloc(sizeof(char) * 100);
    memset(chemin, '\0', 100);
    char temp [5];
    int genImage=rand()%3+1;    //entre 1-3
    //printf("%d\n",genImage);    //teste affichage   procedure de test
    //printf("je suis bien rentre"); //procedure de test

    sprintf (temp, "%d", genImage); // pour faire plus sur un avec un chaine de caractère
    strcat (chemin, "Image");
    strcat (chemin, temp);
    strcat (chemin, ".pbm");

    printf("%s", chemin); //Image1.pbm

    return chemin;
}*/

/*void centrerImageVertical()

{
	struct winsize w;
    ioctl(0, TIOCGWINSZ, &w);

	int n;

	for (n=0; n<(w.ws_row-24)/2; n++)

	{printf("\n");}
}

void centrerImage()

{
	struct winsize w;

	ioctl(0, TIOCGWINSZ, &w);

	int n;

	for (n=0; n<(w.ws_col-80)/2; n++)

	{putchar(' ');
}

void printHorizontal(char *l, size_t wei)
{
    size_t lenght = strlen(l);
    
    if(wei >= lenght)
    {
        size_t n = (wei - lenght)/2;
        
        for(size_t i=0; i<n;i++)
        {
            printf(" ");
        }
    }
    for(int y=0; y<=lenght; y++)
    {
        
        switch (l[y])//Displays an ascii character based on the ascii code
        {
            case 48://0
                printf(" ");
                break;
                
            case 49:
                printf("%c", 219);
                break;
            case 32:
                break;
            default:
                break;
        }
    }
}
//Center vertically image
void center(int hMax, int *h) 
{
    if(hMax >= *h)
    {
        int n = (hMax - *h)/2;
        
        for(int i=0; i<n; i++)//Created a return to the line in order to descend on the ordinate
        {
            printf("\n");
        }
    }
    else
    {
        printf("Image trop grande");
}*/


