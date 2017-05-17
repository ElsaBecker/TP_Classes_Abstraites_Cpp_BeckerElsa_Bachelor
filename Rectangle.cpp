#include "Rectangle.h"



CRectangle::~CRectangle()
{
}

int CRectangle::getLargeur() const
{
	return m_largeur;
}

int CRectangle::getHauteur() const
{
	return m_hauteur;
}

void CRectangle::setLargeur(int larg)
{
	this->m_largeur = larg;
}

void CRectangle::setHauteur(int haut)
{
	this->m_hauteur = haut;
}

void CRectangle::dessiner() const
{
	cout << "Je suis un rectangle" << endl;
	cout << "Mes coordonnées sont : " << this->getX() << ", " << this->getY() << endl;
	cout << "Ma largeur est de " << m_largeur << " et ma hauteur de " << m_hauteur << endl;
}

void CRectangle::aire() const
{
	cout << "Mon aire est de " << m_largeur*m_hauteur << endl;
}

void CRectangle::perimetre() const
{
	cout << "Mon perimetre est de " << (m_hauteur + m_largeur) * 2 << endl;
}
