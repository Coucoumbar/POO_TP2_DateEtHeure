/*
* Fait par : Mathias Lavoie [LAVM19040400]
* Date : 24 fevrier 2026
*/

#include <iostream>
#include <string>

#include "DateHeure.h"

void separateur() {
    std::cout << std::endl << "--------------------------------------------------" << std::endl << std::endl;
}
void titre(std::string text) {
    std::cout << "*** [ " << text << " ] ***" << std::endl;
    std::cout << std::endl;
}
void info(std::string text) {
    std::cout << text << std::endl;
}
void space() { std::cout << std::endl; }

int main()
{
    titre("A. Tester la classe Heure");

    info("Creation de H1 avec les valeurs suivantes : 12h70m35s");
    Heure h1{ 12, 70, 35 };

    std::cout << " - Resultat : H1 = ";
    h1.afficher();
    space();

    space();

    info("Creation de H1 avec les valeurs suivantes : 24h11m60s");
    Heure h2{ 24, 11, 60 };

    std::cout << " - Resultat : H2 = ";
    h2.afficher();
    space();

    space();

    info("Comparaison entre H1 et H2 :");
    std::cout << " - H1 > H2 : " << std::boolalpha << (h1 > h2) << std::endl;
    std::cout << " - H2 > H1 : " << std::boolalpha << (h2 > h1) << std::endl;

    separateur();

    titre("B. Tester la classe Date");

    info("Creation de D1 avec les valeurs suivantes : 32-04-2004");
    Date d1{ 32, 04, 2004 };

    std::cout << " - Resultat : D1 = ";
    d1.afficher();
    space();

    space();

    info("Creation de D2 avec les valeurs suivantes : 19-13-2020");
    Date d2{ 19, 13, 2020 };

    std::cout << " - Resultat : H2 = ";
    d2.afficher();
    space();

    separateur();

    titre("C. Tester la classe DateHeure");

    info("Creation de DH1 avec les valeurs suivantes : 32-04-2004 12h70m35s");
    DateHeure dh1 { 32, 04, 2004, 12, 70, 35 };

    std::cout << " - Resultat : " << std::endl;
    dh1.afficher();
    space();

    space();

    info("Creation de DH2 avec les valeurs suivantes : 19-13-2020 24h11m60s");
    DateHeure dh2{ 19, 13, 2020, 24, 11, 60 };

    std::cout << " - Resultat : " << std::endl;
    dh2.afficher();
    space();

    space();

    info("Creation de DH3 avec les valeurs suivantes : 32-04-2004 24h11m60s");
    DateHeure dh3{ 32, 04, 2004, 24, 11, 60 };

    std::cout << " - Resultat : " << std::endl;
    dh3.afficher();
    space();

    space();

    info("Comparaison entre DH1, DH2 et DH3 : ");
    std::cout << " - DH1 > DH2 : " << std::boolalpha << (dh1 > dh2) << std::endl;
    std::cout << " - DH2 > DH1 : " << std::boolalpha << (dh2 > dh1) << std::endl;
    std::cout << " - DH1 > DH3 : " << std::boolalpha << (dh1 > dh3) << std::endl;
    std::cout << " - DH3 > DH1 : " << std::boolalpha << (dh3 > dh1) << std::endl;

    separateur();

    titre("D. Quelques tests supplementaires");

    info("Creation de J1 avec les valeurs suivantes : 01-01-2020 00h00m00s");
    DateHeure j1{ 1, 1, 2020, 0, 0, 0 };

    std::cout << " - Resultat : " << std::endl;
    j1.afficher();
    space();

    space();

    info("Creation de J2 avec les valeurs suivantes : 31-12-2019 23h59m59s");
    DateHeure j2{ 31, 12, 2019, 23, 59, 59 };

    std::cout << " - Resultat : " << std::endl;
    j2.afficher();
    space();

    space();

    info("Comparaison entre J1 et J2 : ");
    std::cout << " - J1 > J2 : " << std::boolalpha << (j1 > j2) << std::endl;

    space();

    info("Convertion de J1 en Heure (T1)");
    Heure t1 = j1;

    std::cout << " - Resultat : T1 = ";
    t1.afficher();
    space();

    space();

    info("Convertion de J2 en Heure (T2)");
    Heure t2 = j2;

    std::cout << " - Resultat : T2 = ";
    t2.afficher();
    space();

    space();

    info("Comparaison entre T1 et T2 :");
    std::cout << " - T1 > T2 : " << std::boolalpha << (t1 > t2) << std::endl;
}
