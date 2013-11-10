#include "Texturemanager.h"




Texturemanager &Texturemanager::getInstance(){

	static Texturemanager TM;
	
	return TM;
}




Texturemanager::Texturemanager(){

	ifstream is("resources/textures.txt");
	string name;

	cout<<"Started loading Textures..."<<endl;

	while(!is.eof()){
		is>>name;
		mTextureLoader.loadFromFile(name);
		mTextures.push_back(mTextureLoader);
	}


	cout<<"...Finnished loading Textures"<<endl;
	
}



sf::Texture &Texturemanager::getTexture(int s){

	return mTextures.at(s);

}