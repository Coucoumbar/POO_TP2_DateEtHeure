#pragma once
class Heure
{
protected :
	int heure;
	int minute;
	int seconde;

public :
	Heure(int, int, int);

	bool operator>(Heure&) const;

	void afficher() const;

	int get_heure() const;

	int get_minute() const;

	int get_seconde() const;
};

