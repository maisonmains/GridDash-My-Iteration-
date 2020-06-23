#include "Box.h"

void Box::initBox(int p_x, int p_y)
{	
	derezzed = false;
	x = p_x;
	y = p_y;
}

void Box::isColliding(const Tron& tron)
{
	int x0 = x;
	int right0 = x + dimension;
	int y0 = y;
	int bottom0 = y + dimension;

	int x1 = tron.getX();
	int right1 = tron.getX() + tron.getWidth();
	int y1 = tron.getY();
	int bottom1 = tron.getY() + tron.getHeight();

	if (
		x0 <= right1 &&
		right0 >= x1 &&
		y0 <= bottom1 &&
		bottom0 >= y1
		)
	{
		derezzed = true;
	}


}
bool Box::Derezzed() const
{	
	return derezzed;
}
void Box::oscilateHue()
{
	if( increaseHue )
	{
		if( c.GetB() >= 253)
		{
			increaseHue = false;
		}
		else
		{
			c = Color ( c.GetR() + 2, c.GetG() + 2, c.GetB() + 1 );
		}
	}
	else
	{
		if( c.GetB() <= 127 )
		{
			increaseHue = true;
		}
		else
		{
			c = Color(c.GetR() - 2, c.GetG() - 2, c.GetB() - 1);
		}
	}

}
void Box::DrawBox(Graphics& gfx) const
{
	gfx.DrawRect( x, y, dimension, dimension, c );
}
