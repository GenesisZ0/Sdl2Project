#include "Engine.h"



Engine::Engine()
{
	cout << "Windows Crea" << endl;
	SDL_Init(0);
	SDL_CreateWindowAndRenderer(360, 240, 0, &win, &ren);
	SDL_SetWindowTitle(win, "our First Game ");
	running = true;
	count = 0;
	//start.SetDest(50, 50, 75, 75);
	//start.SetSorce(0, 0, 0, 0);
 	//start.SetImage("Image.png", ren);
	loop();
;
}

Engine::~Engine()
{
	cout << "Windows destru" << endl;
	SDL_DestroyRenderer(ren);
	SDL_DestroyWindow(win);
	SDL_Quit();
}

void Engine::loop() 
{
	
	while (running)
	{
		cout << "runnig";
		lastFrame = SDL_GetTicks();
		static int  lasttime;
		if (lastFrame >= (lasttime + 100))
		{
			lasttime = lastFrame;
			frameCount = 0;
			count++;
		}

		render();
		input();
		update();

		if (count > 3) running = false;
	}
	
}

void Engine::render()
{
	
	SDL_SetRenderDrawColor(ren, 255, 0, 0, 255);
	SDL_Rect rect;
	rect.x = rect.y = 0;
	rect.w = 360;
	rect.h = 240;
	SDL_RenderFillRect(ren, &rect);
//	IMG_Init(IMG_INIT_PNG);
	//draw(start);

	frameCount++;
	int timerFps = SDL_GetTicks() - lastFrame;
	if (timerFPS < (1000 / 60)) {
		SDL_Delay((1000 / 60) - timerFPS);
	}
	SDL_RenderPresent(ren);
	
}

void Engine::draw(object O)
{
	SDL_Rect dest = O.getDest();
	SDL_Rect src = O.getSource();
	SDL_RenderCopyEx(ren, O.getText(), &src, &dest, 0, NULL, SDL_FLIP_NONE);
}
