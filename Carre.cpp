#include "Carre.h"


CCarre::~CCarre()
{
}

int CCarre::get_bord() const
{
	return getLargeur();
}

void CCarre::set_bord(int bord)
{
	this->setHauteur(bord);
	this->setLargeur(bord);
}

void CCarre::dessiner() const
{
	cout << "Je suis un carre" << endl;
	cout << "Mes coordonnees sont : " << this->getX() << ", " << this->getY() << endl;
	cout << "Mes cotes font " << get_bord() << endl;
}

void CCarre::aire() const
{
	cout << "Mon aire est de " << get_bord()*get_bord() << endl;
}

void CCarre::perimetre() const
{
	cout << "Mon perimetre est de " << (get_bord() + get_bord()) * 2 << endl;
}
