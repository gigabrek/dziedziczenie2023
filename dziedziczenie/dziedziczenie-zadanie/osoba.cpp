#include "osoba.h"
using namespace std;

osoba::osoba(){
    imie = "NONE";
    nazwisko = "NONE";
    dataUrodzenia = "NONE";
};
osoba::osoba(string i, string n, string du){
    imie = i;
    nazwisko = n;
    dataUrodzenia = du;
};

void osoba::wypisz_info(){
    cout << "\nOsoba:\nImie: " + imie + "\nNazwisko: " + nazwisko + "\nData urodzenia: " + dataUrodzenia;
};