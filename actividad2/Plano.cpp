#include "Plano.h"

Plano::Plano(){}

//dX : punto de inicio y final del eje X, (-X,X);
//dY : punto de inicio y final del eje Y, (-Y,Y);
void Plano::DibujarPlano(float dX, float dY) {
    glPushMatrix();
        //Eje X
        glBegin(GL_LINES);
            glVertex3f(dX*-1, 0.0f, 0.0f);
            glVertex3f(dX, 0.0f, 0.0f);
        glEnd();

        //Eje Y
        glBegin(GL_LINES);
            glVertex3f(0.0f, dY*-1, 0.0f);
            glVertex3f(0.0f, dY, 0.0f);
        glEnd();
    glPopMatrix();
}

Plano::~Plano(){}