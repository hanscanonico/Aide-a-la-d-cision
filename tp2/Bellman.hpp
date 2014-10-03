#ifndef DEF_BELLMAN
#define DEF_BELLMAN

#include "Pcc.hpp"

class Bellman:public Pcc
{
	public:
		Bellman();
		~Bellman();
		void run(Graphe graphe,int origine, int destination);
};

#endif
