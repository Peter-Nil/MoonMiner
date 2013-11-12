#include "Tile.h"
#include <stdlib.h>  
#include <stdio.h>
#include <time.h>

#include <iostream>
using namespace std;

Tile::Tile(int x1, int y1)
{
	float x = float(x1), y = float(y1);
	window = &Windowmanager::getInstance().getWindow();

	
	int p = rand()%Texturemanager::getInstance().getAmount();

	sprite.setTexture(Texturemanager::getInstance().getTexture(p));

	sprite.setRotation(45);
	sprite.setPosition(	( x + float( y1 % 2 ) / 2) * sprite.getGlobalBounds().width, 
						( y - 1) * sprite.getGlobalBounds().height/2);
}


Tile::~Tile()
{
	delete window;

}




void Tile::draw()
{
	
	window->draw(sprite);

}