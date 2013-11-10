#include <SFML/Graphics.hpp>
#include "Texturemanager.h"

#include <iostream>

using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
  

	Texturemanager *tm = &Texturemanager::getInstance();
	
	sf::Sprite *test = new sf::Sprite();
	sf::Sprite *teste = new sf::Sprite();

	test->setTexture(tm->getTexture(0));
	teste->setTexture(tm->getTexture(1));

	teste->setPosition(60,0);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
       
		window.draw(*test);
		window.draw(*teste);
        window.display();
    }



    return 0;
}