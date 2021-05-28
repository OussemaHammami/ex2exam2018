#pragma once
#include <iostream>
using namespace std;
#include "Mobile.h"
class MobilePost :
    public Mobile
{
    int duree;
    int remise;

public:
    MobilePost() {}
    MobilePost(int n, string p = "", int pr = 0, int d = 0, int r = 0) :Mobile(n, p, pr) { duree = d; remise = r; }
    MobilePost(MobilePost& const mp) :Mobile(mp) { duree = mp.duree; remise = mp.remise; }
    ~MobilePost() {}
    int facturer() { return duree * prix * (1 - remise / 100); }
    /* MobilePost operator+(MobilePost n)
    { MobilePost mp;
    mp.remise = remise + n.remise;
    return mp;
    }*/
    int operator+(int n) { return 0; }
    void afficher() {
        cout << " Ligne post-payee - Numero : " << num << " - Abonné : " << prenom << " - Durée des communications : " << duree << " - remise : " << remise << " %" << endl;
    }
};

