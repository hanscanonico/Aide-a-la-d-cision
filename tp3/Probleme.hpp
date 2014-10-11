#ifndef DEF_OPERATION
#define DEF_OPERATION
#include <string>
#include "Operation.hpp"
using namespace std;
class Probleme
{
	private:
		string nomProbleme;
		int n;
		int m;
		int makespan;
		Operation ** matrice;
		Operation * firstOperation;
		Operation * lastOperation;
	
	public:
		Probleme();
		~Probleme();
		string getNomProbleme();
		int getN();
		int getM();
		int getMakespan();
		Operation ** getMatrice();
		Operation * getFirstOperation();
		Operation * getLastOperation();
		
};

#endif
