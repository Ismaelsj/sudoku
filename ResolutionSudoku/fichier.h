#ifndef FICHIER_H
# define FICHIER_H

#include <unistd.h>
int	changevalue(char nb, int tab[81][2], int i, char **grille);
int	checkbloc(char nb, int colonnes, int lignes, char **grille);
int	checkcolonnes(char nb, int lignes, char **grille);
int	checklignes(char nb, int colonnes, char **grille);
int	checkenonce(char **grille);
char	**engine(int ac, char **grille);
int	moteur(char **grille, char nb, int position);
#endif
