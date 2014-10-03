#ifndef DEF_SOMMET
#define DEF_SOMMET

#include <vector>
using namespace std;

class Sommet{
	private:
		int id;
		int x;
		int y;
		vector<int> list_entrants;
		vector<int> list_sortants;
		int labelDistance;

	public:
		Sommet();
		Sommet(int id);
		int getId();
		void setId(int id);
		int getX();
		int getY();
		void setX(int x);
		void setY(int y);
		int getLabelDistance();
		void setLabelDistance(int newLabelDistance);
		void addSucc(int id);
		void addPrec(int id);
		void display();

};

#endif
