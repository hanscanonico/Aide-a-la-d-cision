#ifndef ARC_H_
#define ARC_H_

class Arc{

	private:
		int id;
		int id_origine;
		int id_destination;
		int distance;
		int duree;
	public:
		Arc(int id,int id_origine,int id_destination, int distance);
		int getId();
		int getIdOrigine();
		int getIdDestination();
		int getDistance();
		int getDuree();
		void setIdOrigine(int newIdOrigine);
		void setIdDestination(int newIdDestination);
		void setDistance(int newDistance);
		void setDuree(int duree);
		void display();

};

#endif
