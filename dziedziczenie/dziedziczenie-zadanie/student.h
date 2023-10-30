#pragma once
#include <iostream>
#include "osoba.h"

using namespace std;

class Student: public osoba{
    private:
        int rok;
        int grupa;
        int nrIndeksu;
    public:
        Student(string, string, string, int, int, int);
        void WypiszInfo();
};