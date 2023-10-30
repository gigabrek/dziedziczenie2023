#pragma once
#include <iostream>

using namespace std;

class osoba{
    protected: //protected moze przekazac dane innej klasie, a private nie!
        string imie;
        string nazwisko;
        string dataUrodzenia;
    public:
        osoba();
        osoba(string,string,string);
        void wypisz_info();
};