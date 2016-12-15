#include "lanceur.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //librairie du random
#include <math.h>

int save(int mode)
{
  time_t t;
  struct tm * ta;
  time(&t); /* t contient maintenant la date et l'heure courante */
  ta = localtime(&t);

/*const char * NomJour[] = {"Dimanche", "Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi"};*/

const char * NomMois[] = {"01", "02", "03"     , "04"  , "05"  , "06"  ,
                          "07", "08"  , "09", "10", "11", "12"};

    //printf("Nous sommes %s, ", NomJour[ta->tm_wday]); /*jour en lettre
    printf("%02u/%s/%04u ", ta->tm_mday, NomMois[ta->tm_mon], 1900 + ta->tm_year);
    printf("%02u:%02u:%02u. Type :", ta->tm_hour, ta->tm_min, ta->tm_sec); // affiche l'heure  dans la console
    printf("%d\n",mode);


    //int texte;
{
    FILE* fichier = NULL;

   fichier = fopen("log.txt", "a"); // ouvre le document texte "log.txt"

    if (fichier != NULL)
    
      {

          /* fprintf(fichier,"Bonjour");*/
          fprintf(fichier,"%02u/%s/%04u ", ta->tm_mday, NomMois[ta->tm_mon], 1900 + ta->tm_year); //expliquer
          fprintf(fichier," %02u:%02u:%02u. Type :", ta->tm_hour, ta->tm_min, ta->tm_sec);
          fprintf(fichier,"%d\n",mode);
          fclose(fichier);
      }


    return 0;
}



}




















































