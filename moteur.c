#include "fichier.h"
#include <stdio.h>

int	moteur(char **grille, char nb, int position)
{
	int lignes;
	int colonnes;

	lignes = position / 9 + 1;
	colonnes = position % 9;
	if (position == 81)
		return (1);
	if (grille[lignes][colonnes] > 48 && grille[lignes][colonnes] <= 57)
		return (moteur(grille, nb, position + 1));
	while (nb <= '9')
	{
		if (checkbloc(nb, colonnes, lignes, grille) == 1
			&& checkcolonnes(nb, lignes, grille) == 1
			&& checklignes(nb, colonnes, grille) == 1)
		{
			grille[lignes][colonnes] = nb;
			if (moteur(grille, '1', position + 1) == 1)
				return (1);
		}
		nb++;
	}
	grille[lignes][colonnes] = '.';
	return (0);
}
