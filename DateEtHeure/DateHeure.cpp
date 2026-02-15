#include "DateHeure.h"

DateHeure::DateHeure(int jj, int mm, int aaaa, int h, int m, int s) : Date(jj, mm, aaaa), Heure(h, m, s) {}

bool DateHeure::operator>(DateHeure& proposition) {
	Date& date = *this;
	Heure& heure = *this;

	Date& p_date = proposition;
	Heure& p_heure = proposition;

	if (date > p_date) return true;

	if (date == p_date && heure > p_heure) return true;

	return false;
}

void DateHeure::afficher() const {
	std::cout << "Date : ";
	Date::afficher();
	std::cout << std::endl << "Heure : ";
	Heure::afficher();
}