#include "object.h"

void object::SetDest(int x, int y, int w, int h)
{
	dest.x = x;
	dest.y = y;
	dest.x = w;
	dest.h = h;
	
}

void object::SetSorce(int x, int y, int w, int h)
{
	src.x = x;
	src.y = y;
	src.w = w;
	src.h = h;

}



void object::SetImage(string filname, SDL_Renderer* ren)
{
	 
	SDL_Surface* surf = IMG_Load(filname.c_str());
	tex = SDL_CreateTextureFromSurface(ren, surf);
}
