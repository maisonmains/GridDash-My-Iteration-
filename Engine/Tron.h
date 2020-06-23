#pragma once
#include "MainWindow.h"
#include "Keyboard.h"
class Tron
{
public:
	Tron(int p_x, int p_y)
	{
		x = p_x;
		y = p_y;
	}
	void update(const MainWindow& wnd );
	void maintain();
	void Draw(Graphics& gfx) const;

	int getX() const
	{
		return x;
	}

	int getY() const
	{
		return y;
	}

	int getWidth() const
	{
		return width;
	}

	int getHeight() const
	{
		return height;
	}
private:

	int x;
	int y;
	static constexpr int speed = 1;
	static constexpr int width = 20;
	static constexpr int height = 18;
	

	int screenWidth = ( Graphics::ScreenWidth - 1 );
	int screenHeight = ( Graphics::ScreenHeight - 1 );
};