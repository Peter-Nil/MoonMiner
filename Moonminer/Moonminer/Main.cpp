#include <SFML/Graphics.hpp>
#include "Texturemanager.h"
#include "Windowmanager.h"
#include <iostream>

//place
#include <vector>
#include "Tile.h"
#include <stdio.h>
//-place
using namespace std;

int main()
{

	srand(time(NULL));
	sf::RenderWindow *window = &Windowmanager::getInstance().getWindow();


	vector<Tile*> tilevec;

	for(int y = 0; y < 120;y++){
		for(int x = 0; x < 180;x++){

			tilevec.push_back(new Tile(x*6,y*6));
		}

	}

    while (window->isOpen())
    {
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window->close();
        }

        window->clear();


		for(int i = 0;i < tilevec.size();i++){
			tilevec.at(i)->draw();
		}
		//operations

       
	
        window->display();
    }

	delete window;

    return 0;
}