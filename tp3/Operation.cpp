#include "Operation.hpp"


Operation::Operation()
{
	
}
Operation::~Operation()
{
	
}
int Operation::getNJobs()
{
	return nJobs;
}
int Operation::getNMachine()
{
	return nMachine;
}
int Operation::getNColonne()
{
	return nColonne;
}
int Operation::getDuree()
{
	return duree;
}
int Operation::getDateDemarrage()
{
	return dateDemarrage;
}
int Operation::getDateFin()
{
	return dateFin;
}
Operation * Operation::getSuiv()
{
	return suiv;
}
Operation * Operation::getPrec()
{
	return prec;
}
