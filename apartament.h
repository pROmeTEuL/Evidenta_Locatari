#ifndef APARTAMENT_H
#define APARTAMENT_H
#include "persoana.h"
#include <vector>

class Apartament{
public:
    string numar;
    vector<Persoana> locatari;
    void listare(bool cu_numar = true);
    void editare();
    void editare_nr();
};

#endif // APARTAMENT_H
