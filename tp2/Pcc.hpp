#ifndef DEF_PCC
#define DEF_PCC

#include "Graphe.hpp"
#include <vector>
using namespace std;

class Pcc{
	public:
		Pcc();
		~Pcc();
		virtual void run(Graphe graphe,int origine, int destination)=0;

};

#endif
