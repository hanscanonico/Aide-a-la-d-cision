
#include "Dijkstra.hpp"
#include <list>

using namespace std;

class TaSoeur
{
	private:
		int idSommet;
		int idPere;
	public:
		TaSoeur(int idSommet, int idPere):idSommet(idSommet),idPere(idPere){}
};

Dijkstra::Dijkstra()
{}
		
Dijkstra::~Dijkstra()
{}

void Dijkstra::run(Graphe graphe,int origine, int destination)
{
	list<TaSoeur> libres;
	vector<Sommet>* sommets=graphe.getSommets();
	
	//libres.push_back(new TaSoeur(
}
