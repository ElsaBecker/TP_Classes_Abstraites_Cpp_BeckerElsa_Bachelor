#include "Cercle.h"



CCercle::~CCercle()
{
}

int CCercle::getRadius() const
{
	return m_radius;
}

void CCercle::setRadius(int rad)
{
	this->m_radius = rad;
}

void CCercle::dessiner() const
{
	cout << "Je suis un cercle" << endl;
	cout << "Mes coordonnees sont : " << this->getX() << ", " << this->getY() << endl;
	cout << "Mon rayon est de : " << m_radius << endl;
}

void CCercle::aire() const
{
	cout << "Mon aire est de " << 3.14*(m_radius ^ 2) << endl;
}

void CCercle::perimetre() const
{
	cout << "Mon perimetre est de " << 2 * 3.14 * m_radius << endl;
}
