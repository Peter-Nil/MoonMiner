#include "Noise.h"






double Noise::createNoise(int widthPos, int heightPos,int roughness, double zoom){
	

	double getnoise = 0;
	for(int i = 0;i < 1/*<--change this*/;i++){
		double frequency = pow(2.0,i);
		double amplitude = pow((float)roughness,i);
		getnoise += noise(((double)widthPos)*frequency/zoom,((double)heightPos)/zoom*frequency)*amplitude;
	}

	return getnoise;
}

double Noise::findnoise(double x,double y){
	 int n=(int)x+(int)y*57;
	 n=(n<<13)^n;
	 int nn=(n*(n*n*60493+19990303)+1376312589)&0x7fffffff;	 
	 return 1.0-((double)nn/1073741824.0);
}


double Noise::interpolate(double a,double b,double x){

	double ft=x * 3.1415927;
	double f=(1.0-cos(ft))* 0.5;
	return a*(1.0-f)+b*f;

}


double Noise::noise(double x, double y){

	double floorx=(double)((int)x);
	double floory=(double)((int)y);
	double s,t,u,v;
	s=findnoise(floorx,floory); 
	t=findnoise(floorx+1,floory);
	u=findnoise(floorx,floory+1);
	v=findnoise(floorx+1,floory+1);
	double int1=interpolate(s,t,x-floorx);
	double int2=interpolate(u,v,x-floorx);
	return interpolate(int1,int2,y-floory);

}