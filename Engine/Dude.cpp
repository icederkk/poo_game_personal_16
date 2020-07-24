#include "Dude.h"
#include "Graphics.h"

void Dude::ClampToScreen()
{
	const float right = x + width;
	if( x < 0 )
	{
		x = 0;
	}
	else if( right >= float( Graphics::ScreenWidth ) )
	{
		x = float(Graphics::ScreenWidth - 1) - width;
	}

	const float bottom = y + height;
	if( y < 0 )
	{
		y = 0;
	}
	else if( bottom >= float( Graphics::ScreenHeight ) )
	{
		y = float(Graphics::ScreenHeight - 1) - height;
	}
}

void Dude::Draw( Graphics& gfx ) const
{
	int xint = int(x);
	int yint = int(y);

	gfx.PutPixel( 7 + xint,0 + yint,0,0,0 );
	gfx.PutPixel( 8 + xint,0 + yint,0,0,0 );
	gfx.PutPixel( 9 + xint,0 + yint,0,0,0 );
	gfx.PutPixel( 10 + xint,0 + yint,0,0,0 );
	gfx.PutPixel( 11 + xint,0 + yint,0,0,0 );
	gfx.PutPixel( 12 + xint,0 + yint,0,0,0 );
	gfx.PutPixel( 5 + xint,1 + yint,0,0,0 );
	gfx.PutPixel( 6 + xint,1 + yint,0,0,0 );
	gfx.PutPixel( 7 + xint,1 + yint,254,221,88 );
	gfx.PutPixel( 8 + xint,1 + yint,254,221,88 );
	gfx.PutPixel( 9 + xint,1 + yint,254,221,88 );
	gfx.PutPixel( 10 + xint,1 + yint,254,221,88 );
	gfx.PutPixel( 11 + xint,1 + yint,254,221,88 );
	gfx.PutPixel( 12 + xint,1 + yint,254,221,88 );
	gfx.PutPixel( 13 + xint,1 + yint,0,0,0 );
	gfx.PutPixel( 14 + xint,1 + yint,0,0,0 );
	gfx.PutPixel( 3 + xint,2 + yint,0,0,0 );
	gfx.PutPixel( 4 + xint,2 + yint,0,0,0 );
	gfx.PutPixel( 5 + xint,2 + yint,254,221,88 );
	gfx.PutPixel( 6 + xint,2 + yint,254,221,88 );
	gfx.PutPixel( 7 + xint,2 + yint,254,221,88 );
	gfx.PutPixel( 8 + xint,2 + yint,254,221,88 );
	gfx.PutPixel( 9 + xint,2 + yint,254,221,88 );
	gfx.PutPixel( 10 + xint,2 + yint,254,221,88 );
	gfx.PutPixel( 11 + xint,2 + yint,254,221,88 );
	gfx.PutPixel( 12 + xint,2 + yint,254,221,88 );
	gfx.PutPixel( 13 + xint,2 + yint,254,221,88 );
	gfx.PutPixel( 14 + xint,2 + yint,254,221,88 );
	gfx.PutPixel( 15 + xint,2 + yint,0,0,0 );
	gfx.PutPixel( 16 + xint,2 + yint,0,0,0 );
	gfx.PutPixel( 2 + xint,3 + yint,0,0,0 );
	gfx.PutPixel( 3 + xint,3 + yint,254,221,88 );
	gfx.PutPixel( 4 + xint,3 + yint,254,221,88 );
	gfx.PutPixel( 5 + xint,3 + yint,254,221,88 );
	gfx.PutPixel( 6 + xint,3 + yint,254,221,88 );
	gfx.PutPixel( 7 + xint,3 + yint,254,221,88 );
	gfx.PutPixel( 8 + xint,3 + yint,254,221,88 );
	gfx.PutPixel( 9 + xint,3 + yint,254,221,88 );
	gfx.PutPixel( 10 + xint,3 + yint,254,221,88 );
	gfx.PutPixel( 11 + xint,3 + yint,254,221,88 );
	gfx.PutPixel( 12 + xint,3 + yint,254,221,88 );
	gfx.PutPixel( 13 + xint,3 + yint,254,221,88 );
	gfx.PutPixel( 14 + xint,3 + yint,254,221,88 );
	gfx.PutPixel( 15 + xint,3 + yint,254,221,88 );
	gfx.PutPixel( 16 + xint,3 + yint,254,221,88 );
	gfx.PutPixel( 17 + xint,3 + yint,0,0,0 );
	gfx.PutPixel( 2 + xint,4 + yint,0,0,0 );
	gfx.PutPixel( 3 + xint,4 + yint,254,221,88 );
	gfx.PutPixel( 4 + xint,4 + yint,254,221,88 );
	gfx.PutPixel( 5 + xint,4 + yint,254,221,88 );
	gfx.PutPixel( 6 + xint,4 + yint,254,221,88 );
	gfx.PutPixel( 7 + xint,4 + yint,254,221,88 );
	gfx.PutPixel( 8 + xint,4 + yint,254,221,88 );
	gfx.PutPixel( 9 + xint,4 + yint,254,221,88 );
	gfx.PutPixel( 10 + xint,4 + yint,254,221,88 );
	gfx.PutPixel( 11 + xint,4 + yint,254,221,88 );
	gfx.PutPixel( 12 + xint,4 + yint,254,221,88 );
	gfx.PutPixel( 13 + xint,4 + yint,254,221,88 );
	gfx.PutPixel( 14 + xint,4 + yint,254,221,88 );
	gfx.PutPixel( 15 + xint,4 + yint,254,221,88 );
	gfx.PutPixel( 16 + xint,4 + yint,254,221,88 );
	gfx.PutPixel( 17 + xint,4 + yint,0,0,0 );
	gfx.PutPixel( 1 + xint,5 + yint,0,0,0 );
	gfx.PutPixel( 2 + xint,5 + yint,254,221,88 );
	gfx.PutPixel( 3 + xint,5 + yint,0,0,0 );
	gfx.PutPixel( 4 + xint,5 + yint,0,0,0 );
	gfx.PutPixel( 5 + xint,5 + yint,254,221,88 );
	gfx.PutPixel( 6 + xint,5 + yint,254,221,88 );
	gfx.PutPixel( 7 + xint,5 + yint,254,221,88 );
	gfx.PutPixel( 8 + xint,5 + yint,254,221,88 );
	gfx.PutPixel( 9 + xint,5 + yint,254,221,88 );
	gfx.PutPixel( 10 + xint,5 + yint,254,221,88 );
	gfx.PutPixel( 11 + xint,5 + yint,0,0,0 );
	gfx.PutPixel( 12 + xint,5 + yint,0,0,0 );
	gfx.PutPixel( 13 + xint,5 + yint,0,0,0 );
	gfx.PutPixel( 14 + xint,5 + yint,0,0,0 );
	gfx.PutPixel( 15 + xint,5 + yint,254,221,88 );
	gfx.PutPixel( 16 + xint,5 + yint,254,221,88 );
	gfx.PutPixel( 17 + xint,5 + yint,254,221,88 );
	gfx.PutPixel( 18 + xint,5 + yint,0,0,0 );
	gfx.PutPixel( 1 + xint,6 + yint,0,0,0 );
	gfx.PutPixel( 2 + xint,6 + yint,0,0,0 );
	gfx.PutPixel( 3 + xint,6 + yint,255,255,255 );
	gfx.PutPixel( 4 + xint,6 + yint,0,0,0 );
	gfx.PutPixel( 5 + xint,6 + yint,0,0,0 );
	gfx.PutPixel( 6 + xint,6 + yint,254,221,88 );
	gfx.PutPixel( 7 + xint,6 + yint,254,221,88 );
	gfx.PutPixel( 8 + xint,6 + yint,254,221,88 );
	gfx.PutPixel( 9 + xint,6 + yint,254,221,88 );
	gfx.PutPixel( 10 + xint,6 + yint,0,0,0 );
	gfx.PutPixel( 11 + xint,6 + yint,255,255,255 );
	gfx.PutPixel( 12 + xint,6 + yint,255,255,255 );
	gfx.PutPixel( 13 + xint,6 + yint,0,0,0 );
	gfx.PutPixel( 14 + xint,6 + yint,0,0,0 );
	gfx.PutPixel( 15 + xint,6 + yint,0,0,0 );
	gfx.PutPixel( 16 + xint,6 + yint,254,221,88 );
	gfx.PutPixel( 17 + xint,6 + yint,254,221,88 );
	gfx.PutPixel( 18 + xint,6 + yint,0,0,0 );
	gfx.PutPixel( 0 + xint,7 + yint,0,0,0 );
	gfx.PutPixel( 1 + xint,7 + yint,0,0,0 );
	gfx.PutPixel( 2 + xint,7 + yint,255,255,255 );
	gfx.PutPixel( 3 + xint,7 + yint,255,255,255 );
	gfx.PutPixel( 4 + xint,7 + yint,0,0,0 );
	gfx.PutPixel( 5 + xint,7 + yint,0,0,0 );
	gfx.PutPixel( 6 + xint,7 + yint,254,221,88 );
	gfx.PutPixel( 7 + xint,7 + yint,254,221,88 );
	gfx.PutPixel( 8 + xint,7 + yint,254,221,88 );
	gfx.PutPixel( 9 + xint,7 + yint,254,221,88 );
	gfx.PutPixel( 10 + xint,7 + yint,0,0,0 );
	gfx.PutPixel( 11 + xint,7 + yint,255,255,255 );
	gfx.PutPixel( 12 + xint,7 + yint,255,255,255 );
	gfx.PutPixel( 13 + xint,7 + yint,0,0,0 );
	gfx.PutPixel( 14 + xint,7 + yint,0,0,0 );
	gfx.PutPixel( 15 + xint,7 + yint,0,0,0 );
	gfx.PutPixel( 16 + xint,7 + yint,254,221,88 );
	gfx.PutPixel( 17 + xint,7 + yint,254,221,88 );
	gfx.PutPixel( 18 + xint,7 + yint,254,221,88 );
	gfx.PutPixel( 19 + xint,7 + yint,0,0,0 );
	gfx.PutPixel( 0 + xint,8 + yint,0,0,0 );
	gfx.PutPixel( 1 + xint,8 + yint,0,0,0 );
	gfx.PutPixel( 2 + xint,8 + yint,255,255,255 );
	gfx.PutPixel( 3 + xint,8 + yint,255,255,255 );
	gfx.PutPixel( 4 + xint,8 + yint,255,255,255 );
	gfx.PutPixel( 5 + xint,8 + yint,0,0,0 );
	gfx.PutPixel( 6 + xint,8 + yint,254,221,88 );
	gfx.PutPixel( 7 + xint,8 + yint,254,221,88 );
	gfx.PutPixel( 8 + xint,8 + yint,254,221,88 );
	gfx.PutPixel( 9 + xint,8 + yint,254,221,88 );
	gfx.PutPixel( 10 + xint,8 + yint,0,0,0 );
	gfx.PutPixel( 11 + xint,8 + yint,255,255,255 );
	gfx.PutPixel( 12 + xint,8 + yint,255,255,255 );
	gfx.PutPixel( 13 + xint,8 + yint,255,255,255 );
	gfx.PutPixel( 14 + xint,8 + yint,255,255,255 );
	gfx.PutPixel( 15 + xint,8 + yint,0,0,0 );
	gfx.PutPixel( 16 + xint,8 + yint,254,221,88 );
	gfx.PutPixel( 17 + xint,8 + yint,254,221,88 );
	gfx.PutPixel( 18 + xint,8 + yint,254,221,88 );
	gfx.PutPixel( 19 + xint,8 + yint,0,0,0 );
	gfx.PutPixel( 0 + xint,9 + yint,0,0,0 );
	gfx.PutPixel( 1 + xint,9 + yint,254,221,88 );
	gfx.PutPixel( 2 + xint,9 + yint,0,0,0 );
	gfx.PutPixel( 3 + xint,9 + yint,0,0,0 );
	gfx.PutPixel( 4 + xint,9 + yint,0,0,0 );
	gfx.PutPixel( 5 + xint,9 + yint,0,0,0 );
	gfx.PutPixel( 6 + xint,9 + yint,254,221,88 );
	gfx.PutPixel( 7 + xint,9 + yint,254,221,88 );
	gfx.PutPixel( 8 + xint,9 + yint,254,221,88 );
	gfx.PutPixel( 9 + xint,9 + yint,254,221,88 );
	gfx.PutPixel( 10 + xint,9 + yint,254,221,88 );
	gfx.PutPixel( 11 + xint,9 + yint,0,0,0 );
	gfx.PutPixel( 12 + xint,9 + yint,0,0,0 );
	gfx.PutPixel( 13 + xint,9 + yint,0,0,0 );
	gfx.PutPixel( 14 + xint,9 + yint,0,0,0 );
	gfx.PutPixel( 15 + xint,9 + yint,254,221,88 );
	gfx.PutPixel( 16 + xint,9 + yint,254,221,88 );
	gfx.PutPixel( 17 + xint,9 + yint,254,221,88 );
	gfx.PutPixel( 18 + xint,9 + yint,254,221,88 );
	gfx.PutPixel( 19 + xint,9 + yint,0,0,0 );
	gfx.PutPixel( 0 + xint,10 + yint,0,0,0 );
	gfx.PutPixel( 1 + xint,10 + yint,254,221,88 );
	gfx.PutPixel( 2 + xint,10 + yint,254,221,88 );
	gfx.PutPixel( 3 + xint,10 + yint,254,221,88 );
	gfx.PutPixel( 4 + xint,10 + yint,254,221,88 );
	gfx.PutPixel( 5 + xint,10 + yint,254,221,88 );
	gfx.PutPixel( 6 + xint,10 + yint,254,221,88 );
	gfx.PutPixel( 7 + xint,10 + yint,254,221,88 );
	gfx.PutPixel( 8 + xint,10 + yint,254,221,88 );
	gfx.PutPixel( 9 + xint,10 + yint,254,221,88 );
	gfx.PutPixel( 10 + xint,10 + yint,254,221,88 );
	gfx.PutPixel( 11 + xint,10 + yint,254,221,88 );
	gfx.PutPixel( 12 + xint,10 + yint,254,221,88 );
	gfx.PutPixel( 13 + xint,10 + yint,254,221,88 );
	gfx.PutPixel( 14 + xint,10 + yint,254,221,88 );
	gfx.PutPixel( 15 + xint,10 + yint,254,221,88 );
	gfx.PutPixel( 16 + xint,10 + yint,254,221,88 );
	gfx.PutPixel( 17 + xint,10 + yint,254,221,88 );
	gfx.PutPixel( 18 + xint,10 + yint,254,221,88 );
	gfx.PutPixel( 19 + xint,10 + yint,0,0,0 );
	gfx.PutPixel( 0 + xint,11 + yint,0,0,0 );
	gfx.PutPixel( 1 + xint,11 + yint,254,221,88 );
	gfx.PutPixel( 2 + xint,11 + yint,254,221,88 );
	gfx.PutPixel( 3 + xint,11 + yint,254,221,88 );
	gfx.PutPixel( 4 + xint,11 + yint,254,221,88 );
	gfx.PutPixel( 5 + xint,11 + yint,254,221,88 );
	gfx.PutPixel( 6 + xint,11 + yint,254,221,88 );
	gfx.PutPixel( 7 + xint,11 + yint,20,14,18 );
	gfx.PutPixel( 8 + xint,11 + yint,18,11,14 );
	gfx.PutPixel( 9 + xint,11 + yint,18,12,14 );
	gfx.PutPixel( 10 + xint,11 + yint,18,12,14 );
	gfx.PutPixel( 11 + xint,11 + yint,21,13,16 );
	gfx.PutPixel( 12 + xint,11 + yint,24,11,15 );
	gfx.PutPixel( 13 + xint,11 + yint,0,0,0 );
	gfx.PutPixel( 14 + xint,11 + yint,254,221,88 );
	gfx.PutPixel( 15 + xint,11 + yint,254,221,88 );
	gfx.PutPixel( 16 + xint,11 + yint,254,221,88 );
	gfx.PutPixel( 17 + xint,11 + yint,254,221,88 );
	gfx.PutPixel( 18 + xint,11 + yint,254,221,88 );
	gfx.PutPixel( 19 + xint,11 + yint,0,0,0 );
	gfx.PutPixel( 0 + xint,12 + yint,0,0,0 );
	gfx.PutPixel( 1 + xint,12 + yint,254,221,88 );
	gfx.PutPixel( 2 + xint,12 + yint,254,221,88 );
	gfx.PutPixel( 3 + xint,12 + yint,254,221,88 );
	gfx.PutPixel( 4 + xint,12 + yint,254,221,88 );
	gfx.PutPixel( 5 + xint,12 + yint,254,221,88 );
	gfx.PutPixel( 6 + xint,12 + yint,23,9,23 );
	gfx.PutPixel( 7 + xint,12 + yint,135,26,68 );
	gfx.PutPixel( 8 + xint,12 + yint,135,26,68 );
	gfx.PutPixel( 9 + xint,12 + yint,135,26,68 );
	gfx.PutPixel( 10 + xint,12 + yint,135,26,68 );
	gfx.PutPixel( 11 + xint,12 + yint,135,26,68 );
	gfx.PutPixel( 12 + xint,12 + yint,135,26,68 );
	gfx.PutPixel( 13 + xint,12 + yint,135,26,68 );
	gfx.PutPixel( 14 + xint,12 + yint,0,0,0 );
	gfx.PutPixel( 15 + xint,12 + yint,254,221,88 );
	gfx.PutPixel( 16 + xint,12 + yint,254,221,88 );
	gfx.PutPixel( 17 + xint,12 + yint,254,221,88 );
	gfx.PutPixel( 18 + xint,12 + yint,254,221,88 );
	gfx.PutPixel( 19 + xint,12 + yint,0,0,0 );
	gfx.PutPixel( 1 + xint,13 + yint,0,0,0 );
	gfx.PutPixel( 2 + xint,13 + yint,254,221,88 );
	gfx.PutPixel( 3 + xint,13 + yint,254,221,88 );
	gfx.PutPixel( 4 + xint,13 + yint,254,221,88 );
	gfx.PutPixel( 5 + xint,13 + yint,0,0,0 );
	gfx.PutPixel( 6 + xint,13 + yint,135,26,68 );
	gfx.PutPixel( 7 + xint,13 + yint,135,26,68 );
	gfx.PutPixel( 8 + xint,13 + yint,135,26,68 );
	gfx.PutPixel( 9 + xint,13 + yint,135,26,68 );
	gfx.PutPixel( 10 + xint,13 + yint,135,26,68 );
	gfx.PutPixel( 11 + xint,13 + yint,135,26,68 );
	gfx.PutPixel( 12 + xint,13 + yint,135,26,68 );
	gfx.PutPixel( 13 + xint,13 + yint,135,26,68 );
	gfx.PutPixel( 14 + xint,13 + yint,135,26,68 );
	gfx.PutPixel( 15 + xint,13 + yint,0,0,0 );
	gfx.PutPixel( 16 + xint,13 + yint,254,221,88 );
	gfx.PutPixel( 17 + xint,13 + yint,254,221,88 );
	gfx.PutPixel( 18 + xint,13 + yint,0,0,0 );
	gfx.PutPixel( 1 + xint,14 + yint,0,0,0 );
	gfx.PutPixel( 2 + xint,14 + yint,254,221,88 );
	gfx.PutPixel( 3 + xint,14 + yint,254,221,88 );
	gfx.PutPixel( 4 + xint,14 + yint,0,0,0 );
	gfx.PutPixel( 5 + xint,14 + yint,135,26,68 );
	gfx.PutPixel( 6 + xint,14 + yint,135,26,68 );
	gfx.PutPixel( 7 + xint,14 + yint,135,26,68 );
	gfx.PutPixel( 8 + xint,14 + yint,135,26,68 );
	gfx.PutPixel( 9 + xint,14 + yint,251,192,224 );
	gfx.PutPixel( 10 + xint,14 + yint,251,192,224 );
	gfx.PutPixel( 11 + xint,14 + yint,251,192,224 );
	gfx.PutPixel( 12 + xint,14 + yint,251,192,224 );
	gfx.PutPixel( 13 + xint,14 + yint,135,26,68 );
	gfx.PutPixel( 14 + xint,14 + yint,135,26,68 );
	gfx.PutPixel( 15 + xint,14 + yint,0,0,0 );
	gfx.PutPixel( 16 + xint,14 + yint,254,221,88 );
	gfx.PutPixel( 17 + xint,14 + yint,254,221,88 );
	gfx.PutPixel( 18 + xint,14 + yint,0,0,0 );
	gfx.PutPixel( 2 + xint,15 + yint,0,0,0 );
	gfx.PutPixel( 3 + xint,15 + yint,254,221,88 );
	gfx.PutPixel( 4 + xint,15 + yint,0,0,0 );
	gfx.PutPixel( 5 + xint,15 + yint,135,26,68 );
	gfx.PutPixel( 6 + xint,15 + yint,135,26,68 );
	gfx.PutPixel( 7 + xint,15 + yint,135,26,68 );
	gfx.PutPixel( 8 + xint,15 + yint,251,192,224 );
	gfx.PutPixel( 9 + xint,15 + yint,251,192,224 );
	gfx.PutPixel( 10 + xint,15 + yint,251,192,224 );
	gfx.PutPixel( 11 + xint,15 + yint,251,192,224 );
	gfx.PutPixel( 12 + xint,15 + yint,251,192,224 );
	gfx.PutPixel( 13 + xint,15 + yint,251,192,224 );
	gfx.PutPixel( 14 + xint,15 + yint,135,26,68 );
	gfx.PutPixel( 15 + xint,15 + yint,0,0,0 );
	gfx.PutPixel( 16 + xint,15 + yint,254,221,88 );
	gfx.PutPixel( 17 + xint,15 + yint,0,0,0 );
	gfx.PutPixel( 2 + xint,16 + yint,0,0,0 );
	gfx.PutPixel( 3 + xint,16 + yint,254,221,88 );
	gfx.PutPixel( 4 + xint,16 + yint,0,0,0 );
	gfx.PutPixel( 5 + xint,16 + yint,135,26,68 );
	gfx.PutPixel( 6 + xint,16 + yint,135,26,68 );
	gfx.PutPixel( 7 + xint,16 + yint,135,26,68 );
	gfx.PutPixel( 8 + xint,16 + yint,251,192,224 );
	gfx.PutPixel( 9 + xint,16 + yint,251,192,224 );
	gfx.PutPixel( 10 + xint,16 + yint,251,192,224 );
	gfx.PutPixel( 11 + xint,16 + yint,251,192,224 );
	gfx.PutPixel( 12 + xint,16 + yint,251,192,224 );
	gfx.PutPixel( 13 + xint,16 + yint,251,192,224 );
	gfx.PutPixel( 14 + xint,16 + yint,135,26,68 );
	gfx.PutPixel( 15 + xint,16 + yint,0,0,0 );
	gfx.PutPixel( 16 + xint,16 + yint,254,221,88 );
	gfx.PutPixel( 17 + xint,16 + yint,0,0,0 );
	gfx.PutPixel( 3 + xint,17 + yint,0,0,0 );
	gfx.PutPixel( 4 + xint,17 + yint,0,0,0 );
	gfx.PutPixel( 5 + xint,17 + yint,0,0,0 );
	gfx.PutPixel( 6 + xint,17 + yint,0,0,0 );
	gfx.PutPixel( 7 + xint,17 + yint,0,0,0 );
	gfx.PutPixel( 8 + xint,17 + yint,0,0,0 );
	gfx.PutPixel( 9 + xint,17 + yint,0,0,0 );
	gfx.PutPixel( 10 + xint,17 + yint,0,0,0 );
	gfx.PutPixel( 11 + xint,17 + yint,0,0,0 );
	gfx.PutPixel( 12 + xint,17 + yint,0,0,0 );
	gfx.PutPixel( 13 + xint,17 + yint,0,0,0 );
	gfx.PutPixel( 14 + xint,17 + yint,0,0,0 );
	gfx.PutPixel( 15 + xint,17 + yint,0,0,0 );
	gfx.PutPixel( 16 + xint,17 + yint,0,0,0 );
	gfx.PutPixel( 5 + xint,18 + yint,0,0,0 );
	gfx.PutPixel( 6 + xint,18 + yint,0,0,0 );
	gfx.PutPixel( 7 + xint,18 + yint,254,221,88 );
	gfx.PutPixel( 8 + xint,18 + yint,254,221,88 );
	gfx.PutPixel( 9 + xint,18 + yint,254,221,88 );
	gfx.PutPixel( 10 + xint,18 + yint,254,221,88 );
	gfx.PutPixel( 11 + xint,18 + yint,254,221,88 );
	gfx.PutPixel( 12 + xint,18 + yint,254,221,88 );
	gfx.PutPixel( 13 + xint,18 + yint,0,0,0 );
	gfx.PutPixel( 14 + xint,18 + yint,0,0,0 );
	gfx.PutPixel( 7 + xint,19 + yint,0,0,0 );
	gfx.PutPixel( 8 + xint,19 + yint,0,0,0 );
	gfx.PutPixel( 9 + xint,19 + yint,0,0,0 );
	gfx.PutPixel( 10 + xint,19 + yint,0,0,0 );
	gfx.PutPixel( 11 + xint,19 + yint,0,0,0 );
	gfx.PutPixel( 12 + xint,19 + yint,0,0,0 );
}

void Dude::Update( const Keyboard & kbd )
{
	if( kbd.KeyIsPressed( VK_RIGHT ) )
	{
		x += speed;
	}
	if( kbd.KeyIsPressed( VK_LEFT ) )
	{
		x -= speed;
	}
	if( kbd.KeyIsPressed( VK_DOWN ) )
	{
		y += speed;
	}
	if( kbd.KeyIsPressed( VK_UP ) )
	{
		y -= speed;
	}
}

float Dude::GetX() const
{
	return x;
}

float Dude::GetY() const
{
	return y;
}

float Dude::GetWidth() const
{
	return width;
}

float Dude::GetHeight() const
{
	return height;
}
