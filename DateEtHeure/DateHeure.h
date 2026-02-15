#pragma once

#include "Date.h"
#include "Heure.h"

class DateHeure : public Date, public Heure
{
public :
	DateHeure(int, int, int, int, int, int); // : Date(int, int, int), Heure(int, int, int);

	bool operator>(DateHeure&) const;

	void afficher() const;
};

