#pragma once
#include "Rectangle.h"

class CCarre : protected CRectangle
{

public:
	CCarre(int mX = 0, int mY = 0, int width = 0) : CRectangle (mX, mY, width, width)
	{
	}

	~CCarre();

	int get_bord() const;
	
	void set_bord(int bord);

	void dessiner() const;
	void aire()  const;
	void perimetre() const;
};

