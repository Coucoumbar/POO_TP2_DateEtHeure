#pragma once
class Date
{
protected :
	int jour;
	int mois;
	int annee;

public :
	Date(int, int, int);

	bool operator>(Date&) const;

	void afficher() const;

	int get_jour() const;

	int get_mois() const;

	int get_annee() const;
};

