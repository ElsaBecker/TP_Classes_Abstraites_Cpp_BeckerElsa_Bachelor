#pragma once
#include <iostream>
#include <string>

using namespace std;


class CFigure
{
	int m_x, m_y;

public:
	CFigure(int mX = 0, int mY = 0 ) //constructeur
	{
		this->m_x = mX;
		this->m_y = mY;
	}
	
	~CFigure(); //destructeur

	void setX(int x);
	void setY(int y);

	int getX()const;
	int getY()const;

	virtual void dessiner() const = 0;
	virtual void aire() const = 0;
	virtual void perimetre() const = 0;
};

