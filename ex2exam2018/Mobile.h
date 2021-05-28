#pragma once
#pragma once
#include <iostream>
using namespace std;
class Mobile
{
protected:
    long num;
    string prenom;
    int prix;

public:
    Mobile() {}
    Mobile(int n, string p = "", int pr = 0) { num = n; prenom = p; prix = pr; }
    Mobile(Mobile& const mp) { num = mp.num; prenom = mp.prenom; prix = mp.prix; }
    string getPrenom() { return prenom; }
    long getNum() { return num; }
    virtual ~Mobile() {}
    virtual void afficher() = 0;
//  virtual Mobile operator+(int) = 0;
};



