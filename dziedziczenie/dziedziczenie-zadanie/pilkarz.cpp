#include <iostream>
#include <string>
#include "pilkarz.h"

using namespace std;

Pilkarz::Pilkarz(string i, string n, string du, string p, string kl, int lG){
    imie = i;
    nazwisko = n;
    dataUrodzenia = du;
    pozycja = p;
    klub = kl;
    lGoli = lG;
};

void Pilkarz::WypiszInfo(){
    cout << "\nPilkarz:\nImie: " + imie + "\nNazwisko: " + nazwisko + "\nData urodzenia: " + dataUrodzenia + "\nPozycja: " + pozycja + "\nKlub" + klub + "\nLiczba goli: " + to_string(lGoli);
};

void Pilkarz::StrzelGola(){
    lGoli ++;
};