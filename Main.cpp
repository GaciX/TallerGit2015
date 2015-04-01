#include "SDL.h"

int main(int argc, char* args[]){
	///Las imagenes...
	SDL_Surface *hello = NULL;
	SDL_Surface *screen = NULL;
	///Start SDL
	SDL_Init (SDL_INIT_EVERYTHING);
	///Seteando pantalla...
	screen = SDL_SetVideoMode(640,480,32,SDL_SWSURFACE);
	///640X480 color 32 bits , y el tipo...

	///Load image...
	hello = SDL_LoadBMP("hello.bmp");

	///Apply image to screen...
	SDL_BlitSurface(hello,NULL,screen,NULL);///Aun no se por que...
	///Update Screen....
	SDL_Flip(screen);///Le decimos , que se debe actualizar.
	///PAUSE
	SDL_Delay(2000);
	SDL_FreeSurface(hello);
	///QUIT
	SDL_Quit();
	return 0;
}