#include "bloc.h"

#include <iostream>

using namespace std;

void Bloc::listare_ap(bool cu_numar){
        if (cu_numar){
            cout << "Apartament: " << numar << endl;
        }
        for (int i = 0; i < locuinte.size(); ++i){
            cout << i+1 << " ";
            locuinte[i].listare();
        }

}
void Bloc::editare(){
    cout << "Numar bloc:";
    cin >> numar;
    int varianta;
    do{
        cout << "1.Adauga apartament\n";
        cout << "2.Listeaza apartamente\n";
        cout << "3.Sterge apartament\n";
        cout << "4.Editeaza apartament\n";
        cout << "0.Iesire\n";
        cin >> varianta;
        switch (varianta) {
        case 1:{
            Apartament ap;
            ap.editare_nr();
            locuinte.push_back(ap);
        }
            break;
        case 2:{
            Apartament ap;
            ap.listare(true);
            break;
        }
        case 3:{
            Apartament ap;
            ap.listare(true);
            cout << "A cata pozitie se sterge?(0 este iesire)\n";
            int poz;
            cin >> poz;
            --poz;
            if (poz >= 0 && poz < locuinte.size()){
                locuinte.erase(locuinte.begin() + poz);
            }
        }
            break;
        case 4:{
            Apartament ap;
            ap.listare(true);
            cout << "A cata pozitie se editeaza?(0 este iesire)\n";
            int poz;
            cin >> poz;
            --poz;
            if (poz >= 0 && poz < locuinte.size()){
                locuinte[poz].editare();
            }
        }
            break;
        }
    }while(varianta);
}

void Bloc::listare(){
    cout << "Bloc: " << numar;
}

