#ifndef DEF_DIJKSTRA
#define DEF_DIJKSTRA

#include "Pcc.hpp"

class Dijkstra:public Pcc
{
	public:
		Dijkstra();
		~Dijkstra();
		void run(Graphe graphe,int origine, int destination);
};

#endif
