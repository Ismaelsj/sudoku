FILS = checkbloc.c checkcolonnes.c checklignes.c moteur.c fichier.h

all:
	gcc $(FILS) main.c

clean:
	rm - rf a.out
