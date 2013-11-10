#include <SFML/Graphics.hpp>
#include "Texturemanager.h"
#include "Windowmanager.h"
#include <iostream>
#include "Noise.h"


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

	Noise noise;

	
	

	vector<Tile*> tilevec;
	double seed = 0;
	for(int y = 0; y < 1200;y++){
		for(int x = 0; x < 1800;x++){
			seed = noise.createNoise(x,y,0.4,150);
			tilevec.push_back(new Tile(x*1,y*1,seed));
		}
	}

    while (window->isOpen()){
        sf::Event event;
        while (window->pollEvent(event)){
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