#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //hib�s konstans v�ltoz� n�v
    std::cout << '1-100 ertekek duplazasa'; //sort�r�s hi�nyzik
    for (int i = 0) //for ciklus hi�nyos
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //statement hi�nyzik (v�gtelen ciklus)
    {
        std::cout << "Ertek:" //nincs ki�rva az �rt�k
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //nincs inicializ�lva az atlag
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] //vessz� hi�nyzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
