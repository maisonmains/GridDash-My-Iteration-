#include "Rinzler.h"

void Rinzler::init(int p_x, int p_y, int p_vx, int p_vy)
{	
	assert(initialized == false);
	x = p_x;
	y = p_y;
	vx = p_vx;
	vy = p_vy;
	initialized = true;
}
void Rinzler::update()
{	
	assert(initialized == true);
	x += vx;
	y += vy;

	const int right = x + width;
	if (x < 0)
	{
		x = 0;
	}

	if (right >= Graphics::ScreenWidth)
	{
		x = screenWidth - width;
	}

	const int bottom = y + height;
	if (y <= 0)
	{
		y = 0;
	}

	if (bottom >= Graphics::ScreenHeight)
	{
		y = screenHeight - height;
	}

	if (x <= 0)
	{
		vx = 1;
	}
	if (x >= (screenWidth - width))
	{
		vx = -1;
	}


	if (y <= 0)
	{
		vy = 1;
	}

	if (y >= (screenHeight - height))
	{
		vy = -1;
	}


}
bool Rinzler::isColliding( const Tron& tron )
{
	assert(initialized == true);
	int left0 = x;
	int right0 = x + width;
	int top0 = y;
	int bottom0 = y + height;

	int left1 = tron.getX();
	int right1 = tron.getX() + tron.getWidth();
	int top1 = tron.getY();
	int bottom1 = tron.getY() + tron.getHeight();

	if(
		left0 <= right1 &&
		right0 >= left1 &&
		top0 <= bottom1 &&
		bottom0 >= top1
		)
	{
		derezzed = true;
	}
	
	return derezzed;
}

void Rinzler::Draw(Graphics& gfx) const
{
	gfx.PutPixel(2 + x, 0 + y, 68, 68, 68);
	gfx.PutPixel(3 + x, 0 + y, 68, 68, 68);
	gfx.PutPixel(4 + x, 0 + y, 68, 68, 68);
	gfx.PutPixel(5 + x, 0 + y, 68, 68, 68);
	gfx.PutPixel(6 + x, 0 + y, 68, 68, 68);
	gfx.PutPixel(7 + x, 0 + y, 68, 68, 68);
	gfx.PutPixel(8 + x, 0 + y, 68, 68, 68);
	gfx.PutPixel(9 + x, 0 + y, 68, 68, 68);
	gfx.PutPixel(10 + x, 0 + y, 254, 95, 54);
	gfx.PutPixel(11 + x, 0 + y, 254, 95, 54);
	gfx.PutPixel(2 + x, 1 + y, 68, 68, 68);
	gfx.PutPixel(3 + x, 1 + y, 68, 68, 68);
	gfx.PutPixel(4 + x, 1 + y, 68, 68, 68);
	gfx.PutPixel(5 + x, 1 + y, 68, 68, 68);
	gfx.PutPixel(6 + x, 1 + y, 68, 68, 68);
	gfx.PutPixel(7 + x, 1 + y, 68, 68, 68);
	gfx.PutPixel(8 + x, 1 + y, 68, 68, 68);
	gfx.PutPixel(9 + x, 1 + y, 68, 68, 68);
	gfx.PutPixel(10 + x, 1 + y, 254, 95, 54);
	gfx.PutPixel(11 + x, 1 + y, 254, 95, 54);
	gfx.PutPixel(0 + x, 2 + y, 68, 68, 68);
	gfx.PutPixel(1 + x, 2 + y, 68, 68, 68);
	gfx.PutPixel(2 + x, 2 + y, 23, 23, 23);
	gfx.PutPixel(3 + x, 2 + y, 23, 23, 23);
	gfx.PutPixel(4 + x, 2 + y, 23, 23, 23);
	gfx.PutPixel(5 + x, 2 + y, 23, 23, 23);
	gfx.PutPixel(6 + x, 2 + y, 68, 68, 68);
	gfx.PutPixel(7 + x, 2 + y, 68, 68, 68);
	gfx.PutPixel(8 + x, 2 + y, 254, 95, 54);
	gfx.PutPixel(9 + x, 2 + y, 254, 95, 54);
	gfx.PutPixel(10 + x, 2 + y, 23, 23, 23);
	gfx.PutPixel(11 + x, 2 + y, 23, 23, 23);
	gfx.PutPixel(12 + x, 2 + y, 68, 68, 68);
	gfx.PutPixel(13 + x, 2 + y, 68, 68, 68);
	gfx.PutPixel(0 + x, 3 + y, 68, 68, 68);
	gfx.PutPixel(1 + x, 3 + y, 68, 68, 68);
	gfx.PutPixel(2 + x, 3 + y, 23, 23, 23);
	gfx.PutPixel(3 + x, 3 + y, 23, 23, 23);
	gfx.PutPixel(4 + x, 3 + y, 23, 23, 23);
	gfx.PutPixel(5 + x, 3 + y, 23, 23, 23);
	gfx.PutPixel(6 + x, 3 + y, 68, 68, 68);
	gfx.PutPixel(7 + x, 3 + y, 68, 68, 68);
	gfx.PutPixel(8 + x, 3 + y, 254, 95, 54);
	gfx.PutPixel(9 + x, 3 + y, 254, 95, 54);
	gfx.PutPixel(10 + x, 3 + y, 23, 23, 23);
	gfx.PutPixel(11 + x, 3 + y, 23, 23, 23);
	gfx.PutPixel(12 + x, 3 + y, 68, 68, 68);
	gfx.PutPixel(13 + x, 3 + y, 68, 68, 68);
	gfx.PutPixel(0 + x, 4 + y, 254, 95, 54);
	gfx.PutPixel(1 + x, 4 + y, 254, 95, 54);
	gfx.PutPixel(2 + x, 4 + y, 254, 126, 95);
	gfx.PutPixel(3 + x, 4 + y, 254, 126, 95);
	gfx.PutPixel(4 + x, 4 + y, 254, 126, 95);
	gfx.PutPixel(5 + x, 4 + y, 254, 126, 95);
	gfx.PutPixel(6 + x, 4 + y, 254, 95, 54);
	gfx.PutPixel(7 + x, 4 + y, 254, 95, 54);
	gfx.PutPixel(8 + x, 4 + y, 23, 23, 23);
	gfx.PutPixel(9 + x, 4 + y, 23, 23, 23);
	gfx.PutPixel(10 + x, 4 + y, 23, 23, 23);
	gfx.PutPixel(11 + x, 4 + y, 23, 23, 23);
	gfx.PutPixel(12 + x, 4 + y, 23, 23, 23);
	gfx.PutPixel(13 + x, 4 + y, 23, 23, 23);
	gfx.PutPixel(14 + x, 4 + y, 68, 68, 68);
	gfx.PutPixel(15 + x, 4 + y, 68, 68, 68);
	gfx.PutPixel(0 + x, 5 + y, 254, 95, 54);
	gfx.PutPixel(1 + x, 5 + y, 254, 95, 54);
	gfx.PutPixel(2 + x, 5 + y, 254, 126, 95);
	gfx.PutPixel(3 + x, 5 + y, 254, 126, 95);
	gfx.PutPixel(4 + x, 5 + y, 254, 126, 95);
	gfx.PutPixel(5 + x, 5 + y, 254, 126, 95);
	gfx.PutPixel(6 + x, 5 + y, 254, 95, 54);
	gfx.PutPixel(7 + x, 5 + y, 254, 95, 54);
	gfx.PutPixel(8 + x, 5 + y, 23, 23, 23);
	gfx.PutPixel(9 + x, 5 + y, 23, 23, 23);
	gfx.PutPixel(10 + x, 5 + y, 23, 23, 23);
	gfx.PutPixel(11 + x, 5 + y, 23, 23, 23);
	gfx.PutPixel(12 + x, 5 + y, 23, 23, 23);
	gfx.PutPixel(13 + x, 5 + y, 23, 23, 23);
	gfx.PutPixel(14 + x, 5 + y, 68, 68, 68);
	gfx.PutPixel(15 + x, 5 + y, 68, 68, 68);
	gfx.PutPixel(0 + x, 6 + y, 25, 25, 25);
	gfx.PutPixel(1 + x, 6 + y, 25, 25, 25);
	gfx.PutPixel(2 + x, 6 + y, 25, 25, 25);
	gfx.PutPixel(3 + x, 6 + y, 25, 25, 25);
	gfx.PutPixel(4 + x, 6 + y, 25, 25, 25);
	gfx.PutPixel(5 + x, 6 + y, 25, 25, 25);
	gfx.PutPixel(6 + x, 6 + y, 25, 25, 25);
	gfx.PutPixel(7 + x, 6 + y, 25, 25, 25);
	gfx.PutPixel(8 + x, 6 + y, 25, 25, 25);
	gfx.PutPixel(9 + x, 6 + y, 25, 25, 25);
	gfx.PutPixel(10 + x, 6 + y, 23, 23, 23);
	gfx.PutPixel(11 + x, 6 + y, 23, 23, 23);
	gfx.PutPixel(12 + x, 6 + y, 23, 23, 23);
	gfx.PutPixel(13 + x, 6 + y, 23, 23, 23);
	gfx.PutPixel(14 + x, 6 + y, 68, 68, 68);
	gfx.PutPixel(15 + x, 6 + y, 68, 68, 68);
	gfx.PutPixel(0 + x, 7 + y, 25, 25, 25);
	gfx.PutPixel(1 + x, 7 + y, 25, 25, 25);
	gfx.PutPixel(2 + x, 7 + y, 25, 25, 25);
	gfx.PutPixel(3 + x, 7 + y, 25, 25, 25);
	gfx.PutPixel(4 + x, 7 + y, 25, 25, 25);
	gfx.PutPixel(5 + x, 7 + y, 25, 25, 25);
	gfx.PutPixel(6 + x, 7 + y, 25, 25, 25);
	gfx.PutPixel(7 + x, 7 + y, 25, 25, 25);
	gfx.PutPixel(8 + x, 7 + y, 25, 25, 25);
	gfx.PutPixel(9 + x, 7 + y, 25, 25, 25);
	gfx.PutPixel(10 + x, 7 + y, 23, 23, 23);
	gfx.PutPixel(11 + x, 7 + y, 23, 23, 23);
	gfx.PutPixel(12 + x, 7 + y, 23, 23, 23);
	gfx.PutPixel(13 + x, 7 + y, 23, 23, 23);
	gfx.PutPixel(14 + x, 7 + y, 68, 68, 68);
	gfx.PutPixel(15 + x, 7 + y, 68, 68, 68);
	gfx.PutPixel(0 + x, 8 + y, 25, 25, 25);
	gfx.PutPixel(1 + x, 8 + y, 25, 25, 25);
	gfx.PutPixel(2 + x, 8 + y, 25, 25, 25);
	gfx.PutPixel(3 + x, 8 + y, 25, 25, 25);
	gfx.PutPixel(4 + x, 8 + y, 25, 25, 25);
	gfx.PutPixel(5 + x, 8 + y, 25, 25, 25);
	gfx.PutPixel(6 + x, 8 + y, 25, 25, 25);
	gfx.PutPixel(7 + x, 8 + y, 25, 25, 25);
	gfx.PutPixel(8 + x, 8 + y, 25, 25, 25);
	gfx.PutPixel(9 + x, 8 + y, 25, 25, 25);
	gfx.PutPixel(10 + x, 8 + y, 23, 23, 23);
	gfx.PutPixel(11 + x, 8 + y, 23, 23, 23);
	gfx.PutPixel(12 + x, 8 + y, 68, 68, 68);
	gfx.PutPixel(13 + x, 8 + y, 68, 68, 68);
	gfx.PutPixel(14 + x, 8 + y, 68, 68, 68);
	gfx.PutPixel(15 + x, 8 + y, 68, 68, 68);
	gfx.PutPixel(0 + x, 9 + y, 25, 25, 25);
	gfx.PutPixel(1 + x, 9 + y, 25, 25, 25);
	gfx.PutPixel(2 + x, 9 + y, 25, 25, 25);
	gfx.PutPixel(3 + x, 9 + y, 25, 25, 25);
	gfx.PutPixel(4 + x, 9 + y, 25, 25, 25);
	gfx.PutPixel(5 + x, 9 + y, 25, 25, 25);
	gfx.PutPixel(6 + x, 9 + y, 25, 25, 25);
	gfx.PutPixel(7 + x, 9 + y, 25, 25, 25);
	gfx.PutPixel(8 + x, 9 + y, 25, 25, 25);
	gfx.PutPixel(9 + x, 9 + y, 25, 25, 25);
	gfx.PutPixel(10 + x, 9 + y, 23, 23, 23);
	gfx.PutPixel(11 + x, 9 + y, 23, 23, 23);
	gfx.PutPixel(12 + x, 9 + y, 68, 68, 68);
	gfx.PutPixel(13 + x, 9 + y, 68, 68, 68);
	gfx.PutPixel(14 + x, 9 + y, 68, 68, 68);
	gfx.PutPixel(15 + x, 9 + y, 68, 68, 68);
	gfx.PutPixel(0 + x, 10 + y, 25, 25, 25);
	gfx.PutPixel(1 + x, 10 + y, 25, 25, 25);
	gfx.PutPixel(2 + x, 10 + y, 25, 25, 25);
	gfx.PutPixel(3 + x, 10 + y, 25, 25, 25);
	gfx.PutPixel(4 + x, 10 + y, 25, 25, 25);
	gfx.PutPixel(5 + x, 10 + y, 25, 25, 25);
	gfx.PutPixel(6 + x, 10 + y, 25, 25, 25);
	gfx.PutPixel(7 + x, 10 + y, 25, 25, 25);
	gfx.PutPixel(8 + x, 10 + y, 25, 25, 25);
	gfx.PutPixel(9 + x, 10 + y, 25, 25, 25);
	gfx.PutPixel(10 + x, 10 + y, 68, 68, 68);
	gfx.PutPixel(11 + x, 10 + y, 68, 68, 68);
	gfx.PutPixel(12 + x, 10 + y, 68, 68, 68);
	gfx.PutPixel(13 + x, 10 + y, 68, 68, 68);
	gfx.PutPixel(14 + x, 10 + y, 128, 128, 128);
	gfx.PutPixel(15 + x, 10 + y, 128, 128, 128);
	gfx.PutPixel(0 + x, 11 + y, 25, 25, 25);
	gfx.PutPixel(1 + x, 11 + y, 25, 25, 25);
	gfx.PutPixel(2 + x, 11 + y, 25, 25, 25);
	gfx.PutPixel(3 + x, 11 + y, 25, 25, 25);
	gfx.PutPixel(4 + x, 11 + y, 25, 25, 25);
	gfx.PutPixel(5 + x, 11 + y, 25, 25, 25);
	gfx.PutPixel(6 + x, 11 + y, 25, 25, 25);
	gfx.PutPixel(7 + x, 11 + y, 25, 25, 25);
	gfx.PutPixel(8 + x, 11 + y, 25, 25, 25);
	gfx.PutPixel(9 + x, 11 + y, 25, 25, 25);
	gfx.PutPixel(10 + x, 11 + y, 68, 68, 68);
	gfx.PutPixel(11 + x, 11 + y, 68, 68, 68);
	gfx.PutPixel(12 + x, 11 + y, 68, 68, 68);
	gfx.PutPixel(13 + x, 11 + y, 68, 68, 68);
	gfx.PutPixel(14 + x, 11 + y, 128, 128, 128);
	gfx.PutPixel(15 + x, 11 + y, 128, 128, 128);
	gfx.PutPixel(2 + x, 12 + y, 25, 25, 25);
	gfx.PutPixel(3 + x, 12 + y, 25, 25, 25);
	gfx.PutPixel(4 + x, 12 + y, 25, 25, 25);
	gfx.PutPixel(5 + x, 12 + y, 25, 25, 25);
	gfx.PutPixel(6 + x, 12 + y, 25, 25, 25);
	gfx.PutPixel(7 + x, 12 + y, 25, 25, 25);
	gfx.PutPixel(8 + x, 12 + y, 25, 25, 25);
	gfx.PutPixel(9 + x, 12 + y, 25, 25, 25);
	gfx.PutPixel(10 + x, 12 + y, 68, 68, 68);
	gfx.PutPixel(11 + x, 12 + y, 68, 68, 68);
	gfx.PutPixel(14 + x, 12 + y, 128, 128, 128);
	gfx.PutPixel(15 + x, 12 + y, 128, 128, 128);
	gfx.PutPixel(2 + x, 13 + y, 25, 25, 25);
	gfx.PutPixel(3 + x, 13 + y, 25, 25, 25);
	gfx.PutPixel(4 + x, 13 + y, 25, 25, 25);
	gfx.PutPixel(5 + x, 13 + y, 25, 25, 25);
	gfx.PutPixel(6 + x, 13 + y, 25, 25, 25);
	gfx.PutPixel(7 + x, 13 + y, 25, 25, 25);
	gfx.PutPixel(8 + x, 13 + y, 25, 25, 25);
	gfx.PutPixel(9 + x, 13 + y, 25, 25, 25);
	gfx.PutPixel(10 + x, 13 + y, 68, 68, 68);
	gfx.PutPixel(11 + x, 13 + y, 68, 68, 68);
	gfx.PutPixel(14 + x, 13 + y, 128, 128, 128);
	gfx.PutPixel(15 + x, 13 + y, 128, 128, 128);
	gfx.PutPixel(2 + x, 14 + y, 25, 25, 25);
	gfx.PutPixel(3 + x, 14 + y, 25, 25, 25);
	gfx.PutPixel(4 + x, 14 + y, 25, 25, 25);
	gfx.PutPixel(5 + x, 14 + y, 25, 25, 25);
	gfx.PutPixel(6 + x, 14 + y, 25, 25, 25);
	gfx.PutPixel(7 + x, 14 + y, 25, 25, 25);
	gfx.PutPixel(8 + x, 14 + y, 68, 68, 68);
	gfx.PutPixel(9 + x, 14 + y, 68, 68, 68);
	gfx.PutPixel(2 + x, 15 + y, 25, 25, 25);
	gfx.PutPixel(3 + x, 15 + y, 25, 25, 25);
	gfx.PutPixel(4 + x, 15 + y, 25, 25, 25);
	gfx.PutPixel(5 + x, 15 + y, 25, 25, 25);
	gfx.PutPixel(6 + x, 15 + y, 25, 25, 25);
	gfx.PutPixel(7 + x, 15 + y, 25, 25, 25);
	gfx.PutPixel(8 + x, 15 + y, 68, 68, 68);
	gfx.PutPixel(9 + x, 15 + y, 68, 68, 68);
	gfx.PutPixel(4 + x, 16 + y, 74, 74, 74);
	gfx.PutPixel(5 + x, 16 + y, 74, 74, 74);
	gfx.PutPixel(6 + x, 16 + y, 68, 68, 68);
	gfx.PutPixel(7 + x, 16 + y, 68, 68, 68);
	gfx.PutPixel(12 + x, 16 + y, 74, 74, 74);
	gfx.PutPixel(13 + x, 16 + y, 74, 74, 74);
	gfx.PutPixel(14 + x, 16 + y, 23, 23, 23);
	gfx.PutPixel(15 + x, 16 + y, 23, 23, 23);
	gfx.PutPixel(16 + x, 16 + y, 128, 128, 128);
	gfx.PutPixel(17 + x, 16 + y, 128, 128, 128);
	gfx.PutPixel(4 + x, 17 + y, 74, 74, 74);
	gfx.PutPixel(5 + x, 17 + y, 74, 74, 74);
	gfx.PutPixel(6 + x, 17 + y, 68, 68, 68);
	gfx.PutPixel(7 + x, 17 + y, 68, 68, 68);
	gfx.PutPixel(12 + x, 17 + y, 74, 74, 74);
	gfx.PutPixel(13 + x, 17 + y, 74, 74, 74);
	gfx.PutPixel(14 + x, 17 + y, 23, 23, 23);
	gfx.PutPixel(15 + x, 17 + y, 23, 23, 23);
	gfx.PutPixel(16 + x, 17 + y, 128, 128, 128);
	gfx.PutPixel(17 + x, 17 + y, 128, 128, 128);

}

void Rinzler::stopMotion()
{
	vx = 0;
	vy = 0;
}
