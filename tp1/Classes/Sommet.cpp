#include "Sommet.hpp"

Sommet::Sommet(int id):id(id),list_entrants(500),list_sortants(500),labelDistance(-1) // Pas sûr que ça marche, cette connerie.
{}


int Sommet::getId()
{
	return id;
}

int Sommet::getLabelDistance()
{
	return labelDistance;
}


void Sommet::setLabelDistance(int newLabelDistance)
{
	labelDistance=newLabelDistance;
}


int Sommet::getX()
{
    return x;
}
int Sommet::getY()
{
    return y;
}
