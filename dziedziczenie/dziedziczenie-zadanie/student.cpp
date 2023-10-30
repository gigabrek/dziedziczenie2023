#include <iostream>
#include <string>
#include "student.h"

using namespace std;

Student::Student(string i, string n, string du, int r, int gr, int nrI){
    imie = i;
    nazwisko = n;
    dataUrodzenia = du;
    rok = r;
    grupa = gr;
    nrIndeksu = nrI;
};

void Student::WypiszInfo(){
    cout << "\nPilkarz:\nImie: " + imie + "\nNazwisko: " + nazwisko + "\nData urodzenia: " + dataUrodzenia + "\nRok: " + to_string(rok) + "\nGrupa: " + to_string(grupa) + "\nnrIndeksu: " + to_string(nrIndeksu);
}