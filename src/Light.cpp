#include "Light.h"

Light::Light () {
	position = Vect(0,0,0);
	color = Color(1,1,1,0,0);
}

Light::Light (Vect p, Color c) {
	position = p;
	color = c;
}

Vect Light::getLightPosition () { return position; }
Color Light::getLightColor () { return color; }

