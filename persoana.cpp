#include "persoana.h"
#include <iostream>

void Persoana::listare(){
    cout << "Nume:" << nume << " Varsta:" << varsta << endl;
}

void Persoana::editare(){
    cout << "Nume:";
    cin >> nume;
    cout << "Varsta:";
    cin >> varsta;
}
