#include "Windowmanager.h"



Windowmanager::Windowmanager(){

	window = new sf::RenderWindow(sf::VideoMode(1080,720),"Moon miner");

}


Windowmanager &Windowmanager::getInstance(){
	static Windowmanager WM;
	return WM;

}


sf::RenderWindow &Windowmanager::getWindow(){


	return *window;
}