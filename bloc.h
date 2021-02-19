#ifndef BLOC_H
#define BLOC_H

#include <string>
#include <vector>
#include "apartament.h"

using namespace std;

class Bloc{
public:
    string numar;
    vector<Apartament> locuinte;
    void listare_ap(bool cu_numar);
    void adaugare();
    void editare();
    void listare();
};

#endif // BLOC_H
