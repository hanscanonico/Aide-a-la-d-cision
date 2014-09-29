#include "Graphe.hpp"

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <cstring>
#include <cctype>
#include <locale>

using namespace std;

Graphe::Graphe(string nom):nom(nom),list_sommets(1),list_arcs(1)
{
}

void Graphe::read(string filename)
{
	vector<Sommet>::iterator it;
	int nbNodes, nbArcs, idNode, valX, valY, succ, idArc, idFrom, idTo;
	size_t pos;
	char* data=(char*)malloc(300*sizeof(char));
	char* token;
	float length, time;
	bool coord;
	//char* str=(char*)malloc(400*sizeof(char));
	string str,tok;
	ifstream fs;
	fs.open(filename.c_str());
	if(fs.is_open())
	{
		getline(fs,str);	// Lecture du nom du graphe : OSEF.
		getline(fs,str);	// Lecture du nombre de Sommets.
		pos=str.find('=');
		str=str.substr(pos+1);
		str.erase(remove(str.begin(),str.end(),' '),str.end());
		nbNodes=atoi(str.c_str());
		getline(fs,str);
		pos=str.find('=');
		str=str.substr(pos+1);
		str.erase(remove(str.begin(),str.end(),' '),str.end());
		if(strcmp(str.c_str(),"Yes")==0)
		{
			coord=true;
		}
		else
		{
			if(strcmp(str.c_str(),"No")==0)
			{
				coord=false;			// De toutes manières, je vais pas m'encombrer à faire deux parseurs, en fonction de si le fichier 
										// précise des coordonnées ou pas.
			}
			else
			{
				cout << "C'est mal barré." << endl;
			}
		}
		getline(fs,str);
		pos=str.find('=');
		str=str.substr(pos+1);
		str.erase(remove(str.begin(),str.end(),' '), str.end());
		nbArcs=atoi(str.c_str());
		
		list_sommets.resize(nbNodes);
		list_arcs.resize(nbArcs);
		
		getline(fs,str);	// Ligne vide : OSEF
		getline(fs,str);	// Ligne de commentaire : OSEF
		
		getline(fs,str);
		
		while(!str.empty())
		{
			strcpy(data,str.c_str());
			token=strtok(data,",*");
			tok.assign(token);
			pos=tok.find('=');
			tok=tok.substr(pos+1);
			tok.erase(remove(tok.begin(),tok.end(),' '),tok.end());
			idNode=atoi(tok.c_str());
			token=strtok(NULL,",*");
			tok.assign(token);
			pos=tok.find('=');
			tok=tok.substr(pos+1);
			tok.erase(remove(tok.begin(),tok.end(),' '),tok.end());
			valX=atoi(tok.c_str());
			token=strtok(NULL,",*");
			tok.assign(token);
			pos=tok.find('=');
			tok=tok.substr(pos+1);
			tok.erase(remove(tok.begin(),tok.end(),' '),tok.end());
			valY=atoi(tok.c_str());
			(list_sommets.at(idNode-1)).setId(idNode);
			(list_sommets.at(idNode-1)).setX(valX);
			(list_sommets.at(idNode-1)).setY(valY);
			token=strtok(NULL,",*");
			tok.assign(token);
			pos=tok.find('=');
			tok=tok.substr(pos+1);
			tok.erase(remove(tok.begin(),tok.end(),' '),tok.end());
			(list_sommets.at(idNode-1)).addSucc(atoi(tok.c_str()));
			(list_sommets.at(atoi(tok.c_str())-1)).addPrec(idNode);
			token=strtok(NULL,",*");
			while(token!=NULL && strcmp(token," ")!=0)
			{
				tok.assign(token);
				tok.erase(remove(tok.begin(),tok.end(),' '),tok.end());
				(list_sommets.at(idNode-1)).addSucc(atoi(tok.c_str()));
				(list_sommets.at(atoi(tok.c_str())-1)).addPrec(idNode);
				token=strtok(NULL,",*");
			}
			
			getline(fs,str);
		}
		for(it=list_sommets.begin();it!=list_sommets.end();++it)
		{
			it->display();
		}
			
	}
	else
	{
		cout << "L'ouverture du fichier déconne." << fs.is_open() << endl;
	}
}

void Graphe::display()
{
    cout << "je suis un petit graphe tout beau et tout gentil"<<endl;
}
