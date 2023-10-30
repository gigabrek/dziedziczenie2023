#include <iostream>
#include "pilkarz.h"
#include "student.h"

using namespace std;

int main(int argc, char const *argv[])
{
    osoba Igor("Igor", "Wnuk", "9-11-01");
    Igor.wypisz_info();
    Pilkarz sycz("Mateusz", "Sticzx", "30-10-07", "ST", "Gornikchyba", 3);
    sycz.StrzelGola();
    sycz.WypiszInfo();
    Student typ("Typ", "Czarny", "31-19-23", 2023, 1, 12345);
    typ.WypiszInfo();
    return 0;
}
