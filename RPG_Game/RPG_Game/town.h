#pragma once
#include <SDL.h>
#include <iostream>
#include "Object.h"
#include "shop.h"

using namespace std;

class town: public Object
{
protected:
	Object* background;
	shop* weaponsmith;
	shop* armorsmith;
	shop* alchemy;

public:
	town();
	~town();
	void update(SDL_Event* evt);
};















