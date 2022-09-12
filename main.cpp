#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //hibás konstans változó név
    std::cout << '1-100 ertekek duplazasa'; //sortörés hiányzik
    for (int i = 0) //for ciklus hiányos
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //statement hiányzik (végtelen ciklus)
    {
        std::cout << "Ertek:" //nincs kiírva az érték
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //nincs inicializálva az atlag
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] //vesszõ hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
