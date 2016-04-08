#pragma once

#include <iostream>
#include <string>
#include "include\SDL.h"
#include "GameDatabase.h"
#include "WorldSpace.h"
#include "Camera.h"
#include "Text.h"
#include "FPS.h"

class EngineManager{
protected:
	static EngineManager* EngineManagerPointer;
	SDL_Window* gameWindow;
	SDL_Renderer* gameRenderer;
	SDL_Event gameEvent;
	GameObject* axe;
	Camera mainCamera;
	WorldSpace* mine;
	/*Text* myText;
	Text* myText2;
	Text* myText3;
	Text* myText4;
	Text* myText5;
	Text* myText6;
	Text* myText7;
	Text* myText8;
	Text* myText9;
	Text* myText10;
	Text* myText11;
	Text* myText12;
	Text* myText13;
	Text* myText14;
	Text* myText15;
	Text* myText16;
	Text* myText17;
	Text* myText18;
	Text* myText19;
	Text* myText20;
	Text* myText21;
	Text* myText22;
	Text* myText23;
	Text* myText24;
	Text* myText25;
	Text* myText26;
	Text* myText27;
	Text* myText28;
	Text* myText29;
	Text* myText30;*/
	FPS* fps;
public:
	EngineManager();
	~EngineManager();
	//Required to use any SDLManager functions
	static EngineManager* getManager();
	//Create a game window
	void createWindow(std::string gameTitle, int resolutionWidth, int resolutionHeight);
	Camera* getCamera();
	//Get the event handler of the game
	SDL_Event* getEvent();
	//Update the game window
	void update();
};

