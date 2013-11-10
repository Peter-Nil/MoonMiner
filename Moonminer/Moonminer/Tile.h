#ifndef Tile_h
#define Tile_h

#include "SFML\Graphics.hpp"
#include "Windowmanager.h"
#include "Texturemanager.h"
class Tile{


public:


	Tile(int x, int y);
	~Tile();

	void draw();


protected:





private:

	sf::Sprite sprite;
	sf::RenderWindow *window;

};





#endif