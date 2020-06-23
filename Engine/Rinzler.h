#pragma once
#include "Graphics.h"
#include "Tron.h"
#include <assert.h>

class Rinzler
{
public:
	void init(int p_x, int p_y, int p_vx, int p_vy);
	void update();
	bool isColliding( const Tron& tron );
	void Draw( Graphics& gfx ) const;
	void stopMotion();

private:
	int x;
	int y;
	int vx;
	int vy;
	bool derezzed = false;
	bool initialized = false;
	static constexpr int width = 20;
	static constexpr int height = 18;
	int screenWidth = ( Graphics::ScreenWidth - 1 );
	int screenHeight = ( Graphics::ScreenHeight - 1 );
};