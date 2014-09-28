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
		Sommet(int id);
		int getId();
		int getX();
		int getY();
		int getLabelDistance();
		void setLabelDistance(int newLabelDistance);

};

#endif
