#ifndef Noise_h
#define Noise_h

#include <math.h>

#include <iostream>

using namespace std;

class Noise{

public:

	
	
	double createNoise(int widthPos, int heightPos, int roughness,double zoom);


private:

	double findnoise(double x, double y);
	double interpolate(double a, double b, double x);
	double noise(double x, double y);

};

#endif