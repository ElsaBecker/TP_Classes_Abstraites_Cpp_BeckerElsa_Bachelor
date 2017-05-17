#include "Figure.h"
#include <iostream>

using namespace std;

CFigure::~CFigure()
{
}

void CFigure::setX(int x)
{
	this->m_x = x;
}

void CFigure::setY(int y)
{
	this->m_y = y;
}

int CFigure::getX() const
{
	return m_x;
}

int CFigure::getY() const
{
	return m_y;
}
