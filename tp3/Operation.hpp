#ifndef DEF_OPERATION
#define DEF_OPERATION


class Operation
{
	private:
		int nJobs;
		int nMachine;
		int nColonne;
		int duree;
		int dateDemarrage;
		int dateFin;
		Operation * suiv;
		Operation * prec;
		
	public:
		Operation();
		~Operation();
		int getNJobs();
		int getNMachine();
		int getNColonne();
		int getDuree();
		int getDateDemarrage();
		int getDateFin();
		Operation * getSuiv();
		Operation * getPrec();
		
};

#endif
