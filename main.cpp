#include <iostream>
#include <string>
#include <vector>
#include "bloc.h"

using namespace std;



//Apartament ap;



//Bloc blc;

int main()
{
    Bloc blc;
    cout << "Bine ai venit la Evidenta locatari\n";
    blc.editare();
    blc.listare();

//    int varianta;
//    do{
//        cout << "1.Adauga persoana.\n";
//        cout << "2.Adauga apartamente.\n";
//        cout << "3.Sterge persoana.\n";
//        cout << "4.Sterge apartament.\n";
//        cout << "5.Listeaza tot.\n";
//        cout << "6.Editare bloc.\n";
//        cout << "0.Iesire.\n";
//        cout << "Comanda:";
//        cin >> varianta;
//        switch (varianta) {
//        case 1:
//            break;
//        case 2:
//            break;
//        case 3:
//            break;
//        case 4:
//            break;
//        case 5:
//            blc.listare_tot();
//            break;
//        case 6:
//            blc.editare_bloc();
//            break;
//        }
//    }while(varianta);
    return 0;
}
