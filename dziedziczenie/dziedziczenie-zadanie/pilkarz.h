#pragma once
#include <iostream>
#include "osoba.h"

using namespace std;

class Pilkarz: public osoba{
    private:
        string pozycja;
        string klub;
        int lGoli = 0;
    public:
        Pilkarz(string, string, string, string, string, int);
        void WypiszInfo();
        void StrzelGola();
};