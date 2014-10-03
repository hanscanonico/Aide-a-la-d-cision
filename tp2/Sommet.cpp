#include "Sommet.hpp"

#include <iostream>
#include <iterator>

Sommet::Sommet():id(-1)
{}

Sommet::Sommet(int id):id(id),list_entrants(500),list_sortants(500),labelDistance(-1) // Pas sûr que ça marche, cette connerie.
{}


int Sommet::getId()
{
	return id;
}

void Sommet::setId(int id)
{
	this->id=id;
}

int Sommet::getLabelDistance()
{
	return labelDistance;
}


void Sommet::setLabelDistance(int newLabelDistance)
{
	labelDistance=newLabelDistance;
}


void Sommet::setX(int x)
{
	this->x=x;
}

void Sommet::setY(int y)
{
	this->y=y;
}


int Sommet::getX()
{
    return x;
}
int Sommet::getY()
{
    return y;
}

void Sommet::addSucc(int id)
{
	list_sortants.push_back(id);
}


void Sommet::addPrec(int id)
{
	list_entrants.push_back(id);
}

void Sommet::display()
{
	vector<int>::iterator it;
	cout << id << ": " << x << " " << y << endl;
	cout << "Predecesseurs :" << endl;
	for(it=list_entrants.begin();it!=list_entrants.end();++it)
	{
		cout << *it << " ";
	}
	cout << endl;
	cout << "Successeurs :" << endl;
	for(it=list_sortants.begin();it!=list_sortants.end();++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}
