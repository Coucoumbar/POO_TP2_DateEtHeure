#include "Date.h"

Date::Date(int jj, int mm, int aaaa) {
	annee = aaaa;
	mois = (mm > 0 && mm <= 12) ? mm : 1;

	switch (mois)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			jour = (jj > 0 && jj <= 31) ? jj : 1;
			break;
		case 2:
			jour = (jj > 0 && jj <= 28) ? jj : 1;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			jour = (jj > 0 && jj <= 30) ? jj : 1;
			break;
	}
}

bool Date::operator>(Date& proposition) const {
	bool result = (annee > proposition.annee);

	if (!result) result = (annee == proposition.annee && mois > proposition.mois);

	if (!result) result = (mois == proposition.mois && jour > proposition.jour);

	return result;
}

bool Date::operator==(Date& proposition) const {

	return 	(annee == proposition.annee && mois == proposition.mois && jour == proposition.jour);
}

void Date::afficher() const {
	std::cout << jour << " " << mois_to_string() << " " << annee;
}

int Date::get_jour() const { return jour; }
int Date::get_mois() const { return mois; }
int Date::get_annee() const { return annee; }

std::string Date::mois_to_string() const {
	switch (mois)
	{
		case 1:
			return "Janvier";
			break;
		case 2:
			return "Fevrier";
			break;
		case 3:
			return "Mars";
			break;
		case 4:
			return "Avril";
			break;
		case 5:
			return "Mai";
			break;
		case 6:
			return "Juin";
			break;
		case 7:
			return "Juillet";
			break;
		case 8:
			return "Aout";
			break;
		case 9:
			return "Septembre";
			break;
		case 10:
			return "Octobre";
			break;
		case 11:
			return "Novembre";
			break;
		case 12:
			return "Decembre";
			break;
	}
}
