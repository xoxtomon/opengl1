#include "Arbol.h"


Arbol::Arbol(){}
// aX : coordenada en X; aY: coordenada en Y; aZ : coordenada en Z.
// scale : factor de multiplicacion para el tamaño, 1 = estandar.
void Arbol::DibujarArbol(float aX, float aY, float aZ, float scale) {
	glPushMatrix();
		
		glTranslatef(aX, aY, aZ);
		glScalef(scale, scale, 0.0f); //Hacer el Arbol más pequeño o más grande.
		
		//Copa arbol
		glPushMatrix();
			glTranslatef(0.0f, 0.5f, 0.0f);
			glutSolidSphere(1.0f, 20, 20);
		glPopMatrix();

		//Tronco
		glPushMatrix();
			glRotatef(90, 1, 0, 0);
			glutSolidCylinder(0.5f, 1.0f,20,20);
		glPopMatrix();


	glPopMatrix();
}

Arbol::~Arbol(){}