#include "Tile.h"
#include <stdlib.h>  
#include <stdio.h>
#include <time.h>

#include <iostream>
using namespace std;

Tile::Tile(int x, int y){
	window = &Windowmanager::getInstance().getWindow();

	
	int p = rand()%Texturemanager::getInstance().getAmount();

	sprite.setTexture(Texturemanager::getInstance().getTexture(p));
	
	sprite.setPosition(x,y);
}


Tile::~Tile(){
	delete window;

}




void Tile::draw(){

	window->draw(sprite);


}