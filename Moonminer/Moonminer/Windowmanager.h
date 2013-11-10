#ifndef Windowmanager_h
#define Windowmanager_h

#include "SFML\Graphics.hpp"

class Windowmanager{

public:

	static Windowmanager &getInstance();
	sf::RenderWindow &getWindow();
protected:

	Windowmanager();

private:

	sf::RenderWindow *window;

};



#endif