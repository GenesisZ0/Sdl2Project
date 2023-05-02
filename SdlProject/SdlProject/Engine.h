#pragma once;

#ifndef ENGINE_H
#define ENGINE_H




#include <iostream>
using namespace std;
#include <SDL.h>
#include <SDL_image.h>
#include "object.h";




class Engine
{
public:
	Engine();
	~Engine();
    void loop();
	void update() {};	
	void input() {};
	void render();
	void draw(object O);
private :

	SDL_Renderer* ren;
	SDL_Window* win;
	bool running;
	int count;
	int frameCount, timerFPS, lastFrame;
	object start;

};


#endif //ENGINE_H
