#include "Tile.h"
#include <stdlib.h>  
#include <stdio.h>
#include <time.h>

#include <iostream>
using namespace std;

Tile::Tile(int x, int y, double seed){

	window = &Windowmanager::getInstance().getWindow();

	if(seed < (-0.7)){
		sprite.setTexture(Texturemanager::getInstance().getTexture(0));
	
	}else if(seed < (-0.4)){
		sprite.setTexture(Texturemanager::getInstance().getTexture(1));
	
	}else if(seed < (-0.1)){
		sprite.setTexture(Texturemanager::getInstance().getTexture(2));
		
	}else if(seed < (0.2)){
		sprite.setTexture(Texturemanager::getInstance().getTexture(3));
	
	}else if(seed < (0.4)){
		sprite.setTexture(Texturemanager::getInstance().getTexture(4));

	}
	else if(seed < (0.7)){
		sprite.setTexture(Texturemanager::getInstance().getTexture(5));

	}else if(seed < (1.1)){
		sprite.setTexture(Texturemanager::getInstance().getTexture(6));

	}


	sprite.setPosition(x,y);
}


Tile::~Tile(){
	delete window;

}




void Tile::draw(){

	window->draw(sprite);


}