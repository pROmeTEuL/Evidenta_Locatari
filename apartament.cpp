#include "apartament.h"

#include <iostream>
void Apartament::listare(bool cu_numar){
    if (cu_numar){
        cout << "Apartamentul: " << numar << endl;
    }
    for (int i = 0; i < locatari.size(); ++i){
        cout << i+1 << " ";
        locatari[i].listare();
    }
}

void Apartament::editare()
{
    cout << "Numar apartament:";
    cin >> numar;
    int varianta;
    do{
        cout << "1.Adauga persoana\n";
        cout << "2.Listeaza persoane\n";
        cout << "3.Sterge persoana\n";
        cout << "4.Editeaza persoana\n";
        cout << "0.Iesire\n";
        cin >> varianta;
        switch (varianta) {
        case 1:{
            Persoana pers;
            pers.editare();
            locatari.push_back(pers);
        }
            break;
        case 2:
            listare(false);
            break;
        case 3:{
            listare(false);
            cout << "A cata pozitie se sterge?(0 este iesire)\n";
            int poz;
            cin >> poz;
            --poz;
            if (poz >= 0 && poz < locatari.size()){
                locatari.erase(locatari.begin() + poz);
            }
        }
            break;
        case 4:
            listare(false);
            cout << "A cata pozitie se editeaza?(0 este iesire)\n";
            int poz;
            cin >> poz;
            --poz;
            if (poz >= 0 && poz < locatari.size()){
                locatari[poz].editare();
            }
            break;
        }
    }while(varianta);
}

void Apartament::editare_nr()
{
    cout << "Numar apartament:";
    cin >> numar;
}
