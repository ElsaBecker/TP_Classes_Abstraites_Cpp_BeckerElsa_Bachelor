#pragma once
#include "Figure.h"

class CRectangle : public CFigure
{
	int m_largeur, m_hauteur;

public:

	CRectangle(int mX = 0, int mY = 0, int width = 0, int height = 0) : CFigure(mX, mY)
	{
		this->m_largeur = width;
		this->m_hauteur = height;
	}

	~CRectangle();

	int getLargeur() const;
	int getHauteur() const;

	void setLargeur(int larg);
	void setHauteur(int haut);


	void dessiner() const;
	void aire()  const;
	void perimetre() const;
};

