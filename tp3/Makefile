# Ta mere
# Exemple de makefile un peu automatique

# compilateur
CC = g++
SRC= main.cpp Operation.cpp Probleme.cpp
# options de compilation
CCFLAGS =-Wall -Wextra -ansi -pedantic -g -O2
# options de l'edition des liens
LDFLAGS =-lm
# liste des fichiers objets
OBJ= $(SRC:.cpp=.o)
EXE =executable

# regle finale pour la creation de l'executable
executable:$(OBJ)
	$(CC) $(LDFLAGS) -o $@ $(OBJ)

# compiler tous les .cpp en .o
.cpp.o:
	$(CC) $(CCFLAGS) -c $<

# creation automatique des dependances
# attention : on liste tous les fichiers cpp du repertoire mais on peut affiner ;-)
dep:
	$(CC) -MM *.cpp > makefile.dep

clean:
	rm -rf $(OBJ) core


makefile.dep:*.cpp
	$(CC) -MM $(SRC) > $@

-include makefile.dep
