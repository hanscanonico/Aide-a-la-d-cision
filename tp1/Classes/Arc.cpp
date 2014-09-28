#include "Arc.hpp"
#include <iostream>

using namespace std;

Arc::Arc(int id,int id_origine,int id_destination, int distance):id(id),id_origine(id_origine),id_destination(id_destination),distance(distance)
{}

int Arc::getId()
{
	return id;
}


int Arc::getIdOrigine()
{
	return id_origine;
}

int Arc::getIdDestination()
{
	return id_destination;
}

int Arc::getDistance()
{
	return distance;
}

int Arc::getDuree()
{
	return duree;
}

void Arc::setDuree(int newDuree)
{
    duree=newDuree;
}
void Arc::setIdOrigine(int newIdOrigine)
{
	id_origine=newIdOrigine;
}

void Arc::setIdDestination(int newIdDestination)
{
	id_destination=newIdDestination;
}

void Arc::setDistance(int newDistance)
{
	distance=newDistance;
}


void Arc::display()
{
	cout << id << " : (" << id_origine << "," << id_destination << ") : " << distance << endl;
}
