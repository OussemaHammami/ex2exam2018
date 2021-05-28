#include "Mobile.h"
#include "MobilePre.h"
#include "MobilePost.h"
#include "Station.h"

#include <iostream>
using namespace std;



int main()
{
    Station s;
    MobilePre m1(225);
    MobilePost m2(984);
    s.ajouter(&m1);
    s.ajouter(&m2);
    s.afficher();
}

