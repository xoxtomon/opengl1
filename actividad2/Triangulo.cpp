#include "Triangulo.h"


Triangulo::Triangulo(){}

// l1 : Tamaño del lado base
// h : altura del triangulo, los otros lados se completan.
// tX : coordenada en X; tY: coordenada en Y; tZ : coordenada en Z.
void Triangulo::DibujarTriangulo(float l1, float h, float tX, float tY, float tZ) {
    float basePos, baseNeg;

    basePos = l1 / (float)2;
    baseNeg = basePos * (float)-1;

    glPushMatrix();
    
        glTranslatef(tX, tY, tZ); //Subir el triangulo 3 unidades en Y
        glScalef(0.3f, 0.3f, 0.0f); //Hacer el triangulo mas pequeño
        
        glBegin(GL_TRIANGLES);
            glVertex3f(basePos, 0.0f, 0.0f); //L1: 1.5
            glVertex3f(baseNeg, 0.0f, 0.0f);//L2: 1.5
            glVertex3f(0.0f, h, 0.0f);//H +-= 2.59
        glEnd();
    
    glPopMatrix();
}

Triangulo::~Triangulo(){}