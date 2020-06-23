#pragma once
#include "Graphics.h"
#include "Tron.h"

class Box
{
public:
	void initBox (int p_x, int p_y);
	void isColliding(const Tron& tron);
	bool Derezzed() const;
	void oscilateHue();
	void DrawBox(Graphics& gfx) const;

private:
	int x;
	int y;
	const int dimension = 16;
	Color c = { 0 , 0 , 127 };

	bool initialized = false;
	bool derezzed = false;
	bool increaseHue = true;
};