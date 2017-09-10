#include "fichier.h"
#include <stdio.h>


int	checkcolonnes(char nb, int lignes, char **grille)
{
	int colonnes;

	colonnes = 0;
	while (grille[lignes][colonnes] != '\0')
	{
		//printf("%d", colonnes);
		if (grille[lignes][colonnes] == nb)
			return (0);
		else
			colonnes++;
	}
	//printf("\n");
	return(1);
}
