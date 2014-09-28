#include <iostream>
#include <cstdlib>
#include <string>
#include "Arc.hpp"
#include "Sommet.hpp"
#include "Graphe.hpp"

int main()
{
    Graphe *g=new Graphe("Amine");
    g->display();
    delete g;
	return 0;
}
