#ifndef Texturemanager_h
#define Texturemanager_h

#include "SFML\Graphics.hpp"

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Texturemanager{

public:

	static Texturemanager &getInstance();
	sf::Texture &getTexture(int s);
	int getAmount();
protected:

	Texturemanager();

private:

	std::vector<sf::Texture> mTextures;
	sf::Texture mTextureLoader;
};



#endif