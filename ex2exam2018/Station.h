#pragma once
#include "Mobile.h"
#include <iostream>
using namespace std;
#include <vector>
class Station
{
	string nom;
	vector <Mobile*> v;
public:
	Station(){}
	~Station() 
	{
		vector <Mobile*> ::iterator itr;
		for (itr = v.begin(); itr != v.end(); ++itr) { delete[] * itr; }
	}
	long chercher_num(string n)
	{
		vector <Mobile*> ::iterator itr=v.begin();
		while (itr != v.end() && (*itr)->getPrenom() != n) {
			itr++;
		}
		if (itr == v.end()) { return 0; }
		else { return (*itr)->getNum(); }
	}

	bool ajouter(Mobile* m)
	{
		bool b = false;
		vector <Mobile*> ::iterator itr;
		for (itr = v.begin(); itr != v.end(); ++itr) {
			if ((*itr)->getNum() == m->getNum())
			{
				b = true;
				break;
			}
		}
		v.push_back(m);
		return b;
	}

	void afficher() {
		vector <Mobile*> ::iterator itr;
		for (itr = v.begin(); itr != v.end(); ++itr) {
			(*itr)->afficher();
		}
	}
};

