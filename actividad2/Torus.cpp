#include "Torus.h"

Torus::Torus(){}

void Torus::DibujarTorus(float tX, float tY, float tZ){
    glPushMatrix();
        glTranslatef(tX, tY, tZ);
        
        //Torus como Origen del plano
        glColor3f(1.0, 1.0, 1.0);
        glutWireTorus(0.25, 0.25, 15, 30);

    glPopMatrix();
}

Torus::~Torus(){}