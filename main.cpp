#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];                 //NELEMENTS--> N_ELEMENTS
    std::cout << "1-100 ertekek duplazasa";       // SZÖVEGET IDÉZŐJELBE KELL RAKNI, ";" A SOR VÉGÉRE
   int szamok = 1;
    for (int i = 0;i < N_ELEMENTS ; i++)          // KELL EGY VÁLTOZÓ AMIVEL FELTÖLTJÜK A TÖMBÖT, FOR CIKLUSNÁL MEGKELL ADNI MEDDIG MEGYÜNK ÉS MILYEN LÉPÉSKÖZZEL
    {
        b[i] = szamok * 2;
        szamok++;
    for (int i = 0; i < N_ELEMENTS; i++)            // nincs megadva meddig megyünk i vel
    {
        std::cout << "Ertek:\t" << b[i]<< "\n";          // nem helyes a formátum és nincsenek kiíratva az értékek
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS; i++)      // vessző helyett ";"
    {
        atlag += b[i] ;                        // ";" sor végére
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "Meghívott kiírása" << std::endl; 
    return 0;
}
