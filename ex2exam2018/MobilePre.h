#pragma once
#include <iostream>
using namespace std;
#include "Mobile.h"
class MobilePre :
    public Mobile
{
    int solde;
    int bonus;

public:
    MobilePre() {}
    MobilePre(int n, string p = "", int pr = 0, int d = 0, int r = 0) :Mobile(n, p, pr) { solde = d; bonus = r; }
    MobilePre(MobilePre& const mp) :Mobile(mp) { solde = mp.solde; bonus = mp.bonus; }
    ~MobilePre() {}
    void charger(int val) { solde += val; bonus += val / 2; }
    /*MobilePre operator+(int n)
    { MobilePre mp;
    mp.bonus = mp.bonus + n;
    return mp;
    }*/
    
    void afficher() {
        cout << " Ligne pre-payee - Numero : " << num << " - Abonne : " << prenom << " - Solde : " << solde << " - Bonus : " << bonus << endl;
    }
};

