#include "fichier.h"
#include <stdio.h>

int	checklignes(char nb, int colonnes, char **grille)
{
	int lignes;

	lignes = 1;
	while (grille[lignes])
	{
		//printf("%d", lignes);
		if (grille[lignes][colonnes] == nb)
			return (0);
		else
			lignes++;
	}
	//printf("\n");
	return (1);
}
