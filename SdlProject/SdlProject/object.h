#pragma once
#include <iostream>
#ifndef OBJECT_H
#define OBJECT_H
#include <SDL.h>
#include <SDL_image.h>



using namespace std;




class object
{

private :
	SDL_Rect dest;
	SDL_Rect src;
	SDL_Texture* tex;
	

public:
	object() {};
	SDL_Rect getDest() const { return dest;}
	SDL_Rect getSource() const { return dest; }
	void SetDest(int x, int y, int w, int h);
	void SetSorce(int x, int y, int w, int h);
	void SetImage(string filname,SDL_Renderer* ren );
	SDL_Texture* getText() const { return tex; };

};

#endif // !OBJECT_H