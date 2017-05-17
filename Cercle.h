#pragma once
#include "Figure.h"

class CCercle : public CFigure
{
	int m_radius;

public:

	CCercle(int mX = 0, int mY = 0, int radius = 0) : CFigure(mX, mY)
	{
		m_radius = radius;
	}

	~CCercle();

	int getRadius() const;

	void setRadius(int rad);

	void dessiner() const;
	void aire()  const;
	void perimetre() const;
};

