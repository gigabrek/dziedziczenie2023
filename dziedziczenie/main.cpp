#include <iostream>
#include "bazowa.h"
#include "pochodna.h"
using namespace std;


int main(int argc, char const *argv[])
{
    Bazowa bazA;
    bazA.pubA = " public bazowa A";
    cout<<bazA.info();
    Pochodna poch;
    poch.pubA = "public pochodna ";
    poch.info();
    
    return 0;
}
