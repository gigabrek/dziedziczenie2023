#pragma once
#include "bazowa.h"

class Pochodna : public Bazowa{
    //odziedziczone po bazowej
    //     protected:
    //     string proA;
    // public:
    //     string pubA;
    //     string info();

    private:
        string priPoch;
    protected:
        string proPoch;
    public:
        string pubA;//przysloni pole odziedziczone
        string pubPoch;
        string info(); //przysloni metode
};