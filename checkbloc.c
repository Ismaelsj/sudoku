#include "fichier.h"
#include <stdio.h>

int	checkbloc(char nb, int colonnes, int lignes, char **grille)
{
	int c;
	int l;

	c = colonnes - (colonnes % 3);
	l = lignes - ((lignes - 1) % 3);
	lignes = l;
	while (lignes < l + 3)
	{
		colonnes = c;
		while (colonnes < c + 3)
		{
			if (grille[lignes][colonnes] == nb)
				return (0);
			else
				colonnes++;
		}
		lignes++;
	}
	return (1);
}
