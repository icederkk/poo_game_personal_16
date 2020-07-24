#include "Poo.h"
#include "Graphics.h"
#include <assert.h>

void Poo::Init( float in_x,float in_y,float in_vx,float in_vy )
{
	assert( initialized == false );
	x = in_x;
	y = in_y;
	vx = in_vx;
	vy = in_vy;
	initialized = true;
}

void Poo::Update()
{
	assert( initialized == true );
	x += vx;
	y += vy;

	const float right = x + width;
	if( x < 0 )
	{
		x = 0;
		vx = -vx;
	}
	else if( right >= float(Graphics::ScreenWidth) )
	{
		x = ( float(Graphics::ScreenWidth - 1) ) - width;
		vx = -vx;
	}

	const float bottom = y + height;
	if( y < 0 )
	{
		y = 0;
		vy = -vy;
	}
	else if( bottom >= float( Graphics::ScreenHeight ) )
	{
		y = ( float( Graphics::ScreenHeight - 1) ) - height;
		vy = -vy;
	}
}

bool Poo::TestCollision( const Dude& dude ) const
{
	assert( initialized == true );
	const float duderight = dude.GetX() + dude.GetWidth();
	const float dudebottom = dude.GetY() + dude.GetHeight();
	const float pooright = x + width;
	const float poobottom = y + height;

	return
		duderight >= x &&
		dude.GetX() <= pooright &&
		dudebottom >= y &&
		dude.GetY() <= poobottom;
}

void Poo::Draw( Graphics& gfx ) const
{
	assert( initialized == true );
	int xint = int(x);
	int yint = int(y);

	gfx.PutPixel( 14 + xint,0 + yint,138,77,0 );
	gfx.PutPixel( 7 + xint,1 + yint,138,77,0 );
	gfx.PutPixel( 13 + xint,1 + yint,138,77,0 );
	gfx.PutPixel( 20 + xint,1 + yint,138,77,0 );
	gfx.PutPixel( 6 + xint,2 + yint,138,77,0 );
	gfx.PutPixel( 13 + xint,2 + yint,138,77,0 );
	gfx.PutPixel( 20 + xint,2 + yint,138,77,0 );
	gfx.PutPixel( 6 + xint,3 + yint,138,77,0 );
	gfx.PutPixel( 6 + xint,4 + yint,138,77,0 );
	gfx.PutPixel( 14 + xint,4 + yint,138,77,0 );
	gfx.PutPixel( 21 + xint,4 + yint,138,77,0 );
	gfx.PutPixel( 7 + xint,5 + yint,138,77,0 );
	gfx.PutPixel( 13 + xint,5 + yint,138,77,0 );
	gfx.PutPixel( 21 + xint,5 + yint,138,77,0 );
	gfx.PutPixel( 7 + xint,6 + yint,138,77,0 );
	gfx.PutPixel( 20 + xint,6 + yint,138,77,0 );
	gfx.PutPixel( 6 + xint,7 + yint,138,77,0 );
	gfx.PutPixel( 14 + xint,7 + yint,51,28,0 );
	gfx.PutPixel( 15 + xint,7 + yint,51,28,0 );
	gfx.PutPixel( 20 + xint,7 + yint,138,77,0 );
	gfx.PutPixel( 12 + xint,8 + yint,51,28,0 );
	gfx.PutPixel( 13 + xint,8 + yint,51,28,0 );
	gfx.PutPixel( 14 + xint,8 + yint,51,28,0 );
	gfx.PutPixel( 7 + xint,9 + yint,138,77,0 );
	gfx.PutPixel( 11 + xint,9 + yint,51,28,0 );
	gfx.PutPixel( 12 + xint,9 + yint,102,57,0 );
	gfx.PutPixel( 13 + xint,9 + yint,138,77,0 );
	gfx.PutPixel( 14 + xint,9 + yint,138,77,0 );
	gfx.PutPixel( 15 + xint,9 + yint,51,28,0 );
	gfx.PutPixel( 21 + xint,9 + yint,138,77,0 );
	gfx.PutPixel( 10 + xint,10 + yint,51,28,0 );
	gfx.PutPixel( 11 + xint,10 + yint,51,28,0 );
	gfx.PutPixel( 12 + xint,10 + yint,102,57,0 );
	gfx.PutPixel( 13 + xint,10 + yint,138,77,0 );
	gfx.PutPixel( 14 + xint,10 + yint,138,77,0 );
	gfx.PutPixel( 15 + xint,10 + yint,51,28,0 );
	gfx.PutPixel( 20 + xint,10 + yint,138,77,0 );
	gfx.PutPixel( 9 + xint,11 + yint,51,28,0 );
	gfx.PutPixel( 10 + xint,11 + yint,138,77,0 );
	gfx.PutPixel( 11 + xint,11 + yint,138,77,0 );
	gfx.PutPixel( 12 + xint,11 + yint,51,28,0 );
	gfx.PutPixel( 13 + xint,11 + yint,51,28,0 );
	gfx.PutPixel( 14 + xint,11 + yint,51,28,0 );
	gfx.PutPixel( 15 + xint,11 + yint,51,28,0 );
	gfx.PutPixel( 16 + xint,11 + yint,51,28,0 );
	gfx.PutPixel( 9 + xint,12 + yint,51,28,0 );
	gfx.PutPixel( 10 + xint,12 + yint,138,77,0 );
	gfx.PutPixel( 11 + xint,12 + yint,138,77,0 );
	gfx.PutPixel( 12 + xint,12 + yint,111,62,0 );
	gfx.PutPixel( 13 + xint,12 + yint,102,57,0 );
	gfx.PutPixel( 14 + xint,12 + yint,102,57,0 );
	gfx.PutPixel( 15 + xint,12 + yint,102,57,0 );
	gfx.PutPixel( 16 + xint,12 + yint,51,28,0 );
	gfx.PutPixel( 9 + xint,13 + yint,51,28,0 );
	gfx.PutPixel( 10 + xint,13 + yint,109,61,0 );
	gfx.PutPixel( 11 + xint,13 + yint,138,77,0 );
	gfx.PutPixel( 12 + xint,13 + yint,138,77,0 );
	gfx.PutPixel( 13 + xint,13 + yint,138,77,0 );
	gfx.PutPixel( 14 + xint,13 + yint,138,77,0 );
	gfx.PutPixel( 15 + xint,13 + yint,138,77,0 );
	gfx.PutPixel( 16 + xint,13 + yint,51,28,0 );
	gfx.PutPixel( 5 + xint,14 + yint,51,28,0 );
	gfx.PutPixel( 7 + xint,14 + yint,51,28,0 );
	gfx.PutPixel( 8 + xint,14 + yint,51,28,0 );
	gfx.PutPixel( 9 + xint,14 + yint,51,28,0 );
	gfx.PutPixel( 10 + xint,14 + yint,51,28,0 );
	gfx.PutPixel( 11 + xint,14 + yint,138,77,0 );
	gfx.PutPixel( 12 + xint,14 + yint,138,77,0 );
	gfx.PutPixel( 13 + xint,14 + yint,138,77,0 );
	gfx.PutPixel( 14 + xint,14 + yint,138,77,0 );
	gfx.PutPixel( 15 + xint,14 + yint,138,77,0 );
	gfx.PutPixel( 16 + xint,14 + yint,51,28,0 );
	gfx.PutPixel( 4 + xint,15 + yint,51,28,0 );
	gfx.PutPixel( 5 + xint,15 + yint,138,77,0 );
	gfx.PutPixel( 6 + xint,15 + yint,51,28,0 );
	gfx.PutPixel( 7 + xint,15 + yint,116,65,0 );
	gfx.PutPixel( 8 + xint,15 + yint,138,77,0 );
	gfx.PutPixel( 9 + xint,15 + yint,138,77,0 );
	gfx.PutPixel( 10 + xint,15 + yint,138,77,0 );
	gfx.PutPixel( 11 + xint,15 + yint,51,28,0 );
	gfx.PutPixel( 12 + xint,15 + yint,51,28,0 );
	gfx.PutPixel( 13 + xint,15 + yint,51,28,0 );
	gfx.PutPixel( 14 + xint,15 + yint,51,28,0 );
	gfx.PutPixel( 15 + xint,15 + yint,51,28,0 );
	gfx.PutPixel( 16 + xint,15 + yint,51,28,0 );
	gfx.PutPixel( 17 + xint,15 + yint,51,28,0 );
	gfx.PutPixel( 18 + xint,15 + yint,51,28,0 );
	gfx.PutPixel( 1 + xint,16 + yint,51,28,0 );
	gfx.PutPixel( 2 + xint,16 + yint,51,28,0 );
	gfx.PutPixel( 3 + xint,16 + yint,51,28,0 );
	gfx.PutPixel( 4 + xint,16 + yint,51,28,0 );
	gfx.PutPixel( 5 + xint,16 + yint,138,77,0 );
	gfx.PutPixel( 6 + xint,16 + yint,51,28,0 );
	gfx.PutPixel( 7 + xint,16 + yint,116,65,0 );
	gfx.PutPixel( 8 + xint,16 + yint,138,77,0 );
	gfx.PutPixel( 9 + xint,16 + yint,138,77,0 );
	gfx.PutPixel( 10 + xint,16 + yint,138,77,0 );
	gfx.PutPixel( 11 + xint,16 + yint,138,77,0 );
	gfx.PutPixel( 12 + xint,16 + yint,138,77,0 );
	gfx.PutPixel( 13 + xint,16 + yint,109,61,0 );
	gfx.PutPixel( 14 + xint,16 + yint,51,28,0 );
	gfx.PutPixel( 15 + xint,16 + yint,138,77,0 );
	gfx.PutPixel( 16 + xint,16 + yint,138,77,0 );
	gfx.PutPixel( 17 + xint,16 + yint,138,77,0 );
	gfx.PutPixel( 18 + xint,16 + yint,123,69,0 );
	gfx.PutPixel( 19 + xint,16 + yint,51,28,0 );
	gfx.PutPixel( 0 + xint,17 + yint,51,28,0 );
	gfx.PutPixel( 1 + xint,17 + yint,87,49,0 );
	gfx.PutPixel( 2 + xint,17 + yint,87,49,0 );
	gfx.PutPixel( 3 + xint,17 + yint,87,49,0 );
	gfx.PutPixel( 4 + xint,17 + yint,87,49,0 );
	gfx.PutPixel( 5 + xint,17 + yint,51,28,0 );
	gfx.PutPixel( 6 + xint,17 + yint,51,28,0 );
	gfx.PutPixel( 7 + xint,17 + yint,43,24,0 );
	gfx.PutPixel( 8 + xint,17 + yint,51,28,0 );
	gfx.PutPixel( 9 + xint,17 + yint,51,28,0 );
	gfx.PutPixel( 10 + xint,17 + yint,51,28,0 );
	gfx.PutPixel( 11 + xint,17 + yint,51,28,0 );
	gfx.PutPixel( 12 + xint,17 + yint,51,28,0 );
	gfx.PutPixel( 13 + xint,17 + yint,40,22,0 );
	gfx.PutPixel( 14 + xint,17 + yint,51,28,0 );
	gfx.PutPixel( 15 + xint,17 + yint,138,77,0 );
	gfx.PutPixel( 16 + xint,17 + yint,138,77,0 );
	gfx.PutPixel( 17 + xint,17 + yint,138,77,0 );
	gfx.PutPixel( 18 + xint,17 + yint,123,69,0 );
	gfx.PutPixel( 19 + xint,17 + yint,51,28,0 );
	gfx.PutPixel( 0 + xint,18 + yint,51,28,0 );
	gfx.PutPixel( 1 + xint,18 + yint,138,77,0 );
	gfx.PutPixel( 2 + xint,18 + yint,138,77,0 );
	gfx.PutPixel( 3 + xint,18 + yint,138,77,0 );
	gfx.PutPixel( 4 + xint,18 + yint,138,77,0 );
	gfx.PutPixel( 5 + xint,18 + yint,51,28,0 );
	gfx.PutPixel( 6 + xint,18 + yint,51,28,0 );
	gfx.PutPixel( 7 + xint,18 + yint,51,28,0 );
	gfx.PutPixel( 8 + xint,18 + yint,51,28,0 );
	gfx.PutPixel( 9 + xint,18 + yint,51,28,0 );
	gfx.PutPixel( 10 + xint,18 + yint,51,28,0 );
	gfx.PutPixel( 11 + xint,18 + yint,51,28,0 );
	gfx.PutPixel( 12 + xint,18 + yint,51,28,0 );
	gfx.PutPixel( 13 + xint,18 + yint,51,28,0 );
	gfx.PutPixel( 14 + xint,18 + yint,51,28,0 );
	gfx.PutPixel( 15 + xint,18 + yint,138,77,0 );
	gfx.PutPixel( 16 + xint,18 + yint,138,77,0 );
	gfx.PutPixel( 17 + xint,18 + yint,138,77,0 );
	gfx.PutPixel( 18 + xint,18 + yint,123,69,0 );
	gfx.PutPixel( 19 + xint,18 + yint,51,28,0 );
	gfx.PutPixel( 20 + xint,18 + yint,51,28,0 );
	gfx.PutPixel( 21 + xint,18 + yint,51,28,0 );
	gfx.PutPixel( 22 + xint,18 + yint,51,28,0 );
	gfx.PutPixel( 0 + xint,19 + yint,51,28,0 );
	gfx.PutPixel( 1 + xint,19 + yint,138,77,0 );
	gfx.PutPixel( 2 + xint,19 + yint,138,77,0 );
	gfx.PutPixel( 3 + xint,19 + yint,138,77,0 );
	gfx.PutPixel( 4 + xint,19 + yint,138,77,0 );
	gfx.PutPixel( 5 + xint,19 + yint,51,28,0 );
	gfx.PutPixel( 6 + xint,19 + yint,138,77,0 );
	gfx.PutPixel( 7 + xint,19 + yint,138,77,0 );
	gfx.PutPixel( 8 + xint,19 + yint,138,77,0 );
	gfx.PutPixel( 9 + xint,19 + yint,138,77,0 );
	gfx.PutPixel( 10 + xint,19 + yint,138,77,0 );
	gfx.PutPixel( 11 + xint,19 + yint,138,77,0 );
	gfx.PutPixel( 12 + xint,19 + yint,138,77,0 );
	gfx.PutPixel( 13 + xint,19 + yint,138,77,0 );
	gfx.PutPixel( 14 + xint,19 + yint,138,77,0 );
	gfx.PutPixel( 15 + xint,19 + yint,138,77,0 );
	gfx.PutPixel( 16 + xint,19 + yint,138,77,0 );
	gfx.PutPixel( 17 + xint,19 + yint,138,77,0 );
	gfx.PutPixel( 18 + xint,19 + yint,123,69,0 );
	gfx.PutPixel( 19 + xint,19 + yint,51,28,0 );
	gfx.PutPixel( 20 + xint,19 + yint,138,77,0 );
	gfx.PutPixel( 21 + xint,19 + yint,138,77,0 );
	gfx.PutPixel( 22 + xint,19 + yint,65,36,0 );
	gfx.PutPixel( 23 + xint,19 + yint,51,28,0 );
	gfx.PutPixel( 1 + xint,20 + yint,51,28,0 );
	gfx.PutPixel( 2 + xint,20 + yint,51,28,0 );
	gfx.PutPixel( 3 + xint,20 + yint,51,28,0 );
	gfx.PutPixel( 4 + xint,20 + yint,51,28,0 );
	gfx.PutPixel( 5 + xint,20 + yint,51,28,0 );
	gfx.PutPixel( 6 + xint,20 + yint,138,77,0 );
	gfx.PutPixel( 7 + xint,20 + yint,138,77,0 );
	gfx.PutPixel( 8 + xint,20 + yint,138,77,0 );
	gfx.PutPixel( 9 + xint,20 + yint,138,77,0 );
	gfx.PutPixel( 10 + xint,20 + yint,138,77,0 );
	gfx.PutPixel( 11 + xint,20 + yint,138,77,0 );
	gfx.PutPixel( 12 + xint,20 + yint,138,77,0 );
	gfx.PutPixel( 13 + xint,20 + yint,138,77,0 );
	gfx.PutPixel( 14 + xint,20 + yint,138,77,0 );
	gfx.PutPixel( 15 + xint,20 + yint,138,77,0 );
	gfx.PutPixel( 16 + xint,20 + yint,138,77,0 );
	gfx.PutPixel( 17 + xint,20 + yint,138,77,0 );
	gfx.PutPixel( 18 + xint,20 + yint,123,69,0 );
	gfx.PutPixel( 19 + xint,20 + yint,51,28,0 );
	gfx.PutPixel( 20 + xint,20 + yint,138,77,0 );
	gfx.PutPixel( 21 + xint,20 + yint,138,77,0 );
	gfx.PutPixel( 22 + xint,20 + yint,65,36,0 );
	gfx.PutPixel( 23 + xint,20 + yint,51,28,0 );
	gfx.PutPixel( 0 + xint,21 + yint,51,28,0 );
	gfx.PutPixel( 1 + xint,21 + yint,138,77,0 );
	gfx.PutPixel( 2 + xint,21 + yint,138,77,0 );
	gfx.PutPixel( 3 + xint,21 + yint,138,77,0 );
	gfx.PutPixel( 4 + xint,21 + yint,138,77,0 );
	gfx.PutPixel( 5 + xint,21 + yint,138,77,0 );
	gfx.PutPixel( 6 + xint,21 + yint,51,28,0 );
	gfx.PutPixel( 7 + xint,21 + yint,51,28,0 );
	gfx.PutPixel( 8 + xint,21 + yint,51,28,0 );
	gfx.PutPixel( 9 + xint,21 + yint,51,28,0 );
	gfx.PutPixel( 10 + xint,21 + yint,51,28,0 );
	gfx.PutPixel( 11 + xint,21 + yint,51,28,0 );
	gfx.PutPixel( 12 + xint,21 + yint,51,28,0 );
	gfx.PutPixel( 13 + xint,21 + yint,51,28,0 );
	gfx.PutPixel( 14 + xint,21 + yint,51,28,0 );
	gfx.PutPixel( 15 + xint,21 + yint,51,28,0 );
	gfx.PutPixel( 16 + xint,21 + yint,51,28,0 );
	gfx.PutPixel( 17 + xint,21 + yint,51,28,0 );
	gfx.PutPixel( 18 + xint,21 + yint,51,28,0 );
	gfx.PutPixel( 20 + xint,21 + yint,51,28,0 );
	gfx.PutPixel( 21 + xint,21 + yint,51,28,0 );
	gfx.PutPixel( 22 + xint,21 + yint,51,28,0 );
	gfx.PutPixel( 0 + xint,22 + yint,51,28,0 );
	gfx.PutPixel( 1 + xint,22 + yint,65,36,0 );
	gfx.PutPixel( 2 + xint,22 + yint,65,36,0 );
	gfx.PutPixel( 3 + xint,22 + yint,65,36,0 );
	gfx.PutPixel( 4 + xint,22 + yint,65,36,0 );
	gfx.PutPixel( 5 + xint,22 + yint,65,36,0 );
	gfx.PutPixel( 6 + xint,22 + yint,51,28,0 );
	gfx.PutPixel( 1 + xint,23 + yint,51,28,0 );
	gfx.PutPixel( 2 + xint,23 + yint,51,28,0 );
	gfx.PutPixel( 3 + xint,23 + yint,51,28,0 );
	gfx.PutPixel( 4 + xint,23 + yint,51,28,0 );
	gfx.PutPixel( 5 + xint,23 + yint,51,28,0 );
	gfx.PutPixel( 6 + xint,23 + yint,51,28,0 );
}