#ifndef GRAPHE_H
#define GRAPHE_H
#include "Arc.hpp"
#include "Sommet.hpp"

#include <string>

class Graphe
{
    private:
        string nom;
        vector<Sommet> list_sommets;
		vector<Arc> list_arcs;
    public:
        Graphe(string nom);
        void read(string filename);
        void display();
        vector<Sommet>* getSommets();
};

#endif // GRAPHE_H
