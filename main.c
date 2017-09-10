#include <unistd.h>
#include "fichier.h"
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int a;
	int b;
	char nb;
	int position;
	char **grille;

	nb = '1';
	position = 0;
	grille = argv;
	if (moteur(grille, nb, position) == 0)
		printf("\nGrille non valide\n\n");
	else
	{
		a = 1;
		while (a < argc)
		{
			b = 0;
			while (grille[a][b] != '\0')
			{
				ft_putchar(grille[a][b]);
				ft_putchar(' ');
				b++;
			}
			ft_putchar('\n');
			a++;
	}
	}
	return (0);
}
