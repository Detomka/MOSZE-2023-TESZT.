#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];                 //NELEMENTS--> N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa'          // SZÖVEGET IDÉZŐJELBE KELL RAKNI, ";" A SOR VÉGÉRE
    for (int i = 0;)                               // KELL EGY VÁLTOZÓ AMIVEL FELTÖLTJÜK A TÖMBÖT, FOR CIKLUSNÁL MEGKELL ADNI MEDDIG MEGYÜNK ÉS MILYEN LÉPÉSKÖZZEL
    {
        b[i] = i * 2;                    // A KORÁBBAN LÉTREHOZOTT VÁLTOZÓ ÉRTÉKÉT KELL 2 VEL MEGSZOROZNI NEM i-t , ezután növelni a vátozó értékét
    }
    for (int i = 0; i; i++)            // nincs megadva meddig megyünk i vel
    {
        std::cout << "Ertek:"           // nem helyes a formátum és nincsenek kiíratva az értékek
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)      // vessző helyett ";"
    {
        atlag += b[i]                         // ";" sor végére
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
