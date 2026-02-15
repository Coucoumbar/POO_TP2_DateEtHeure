#pragma once

#include <iostream>
#include "Date.h"
#include "Heure.h"

class DateHeure : public Date, public Heure
{
public :
	DateHeure(int, int, int, int, int, int);

	bool operator>(DateHeure&);

	void afficher() const;
};

