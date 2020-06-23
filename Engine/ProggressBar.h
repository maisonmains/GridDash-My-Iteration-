#pragma once
#include "Graphics.h"

class ProggressBar
{
public:
	void initProgg(int p_x, int p_y)
	{
		Proggx = p_x;
		Proggy = p_y;
	}
	void Proggbar(Graphics& gfx) const
	{
		gfx.DrawRect(Proggx, Proggy, dimension * score, dimension, cProgg);
	}

	void increaseScore()
	{
		score++;
	}

	int getScore() const
	{
		return score;
	}
private:
	int Proggx;
	int Proggy;
	Color cProgg = { 10, 100, 10 };
	const int dimension = 16;
	int score = 0;
};