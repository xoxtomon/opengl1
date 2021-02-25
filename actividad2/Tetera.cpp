#include "Tetera.h"


Tetera::Tetera(){}

void Tetera::DibujarTetera(float szs, float tX, float tY, float tZ) {
    glPushMatrix();
        glTranslatef(tX, tY, tZ);
        glutSolidTeapot(szs);
    glPopMatrix();
}

Tetera::~Tetera() {}