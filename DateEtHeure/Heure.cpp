#include "Heure.h"
#include <iostream>
#include <iomanip>

Heure::Heure(int h, int m, int s) {
	heure = (h >= 0 && h < 24) ? h : 0;
	minute = (m >= 0 && m < 60) ? m : 0;
	seconde = (s >= 0 && s < 60) ? s : 0;
}

bool Heure::operator>(Heure& proposition) const {
	bool result = (heure > proposition.heure);

	if (!result) result = (heure == proposition.heure && minute > proposition.minute);

	if (!result) result = (minute == proposition.minute && seconde > proposition.seconde);

	return result;
}

bool Heure::operator==(Heure& proposition) const {

	return 	(heure == proposition.heure && minute == proposition.minute && seconde == proposition.seconde);
}

void Heure::afficher() const {
	std::cout << std::setw(2) << std::setfill('0') << heure << ":"
		<< std::setw(2) << std::setfill('0') << minute << ":"
		<< std::setw(2) << std::setfill('0') << seconde;
}

int Heure::get_heure() const { return heure; }
int Heure::get_minute() const { return minute; }
int Heure::get_seconde() const { return seconde; }
