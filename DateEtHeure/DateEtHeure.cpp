#include <iostream>

#include "DateHeure.h"

int main()
{
    std::cout << "Hello World!\n";

    DateHeure date_et_heure{ 15, 2, 2026, 2, 49, 30 };
    DateHeure date_et_heure2{ 15, 2, 2025, 2, 49, 30 };

    date_et_heure.afficher();
}
