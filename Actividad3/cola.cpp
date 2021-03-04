#include "cola.h"

cola::cola(){}

void cola::DibujarCola() {


	//glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
		glPushMatrix();
			glTranslatef(-0.5, 0.0, 0.0);
			glRotatef((GLfloat)30, 0.0, 0.0, 1.0);
			glTranslatef(0.5, 0.0, 0.0);
			glPushMatrix();
				glScalef(2.0, 0.4, 1.0);
				glutSolidCube(0.5);
			glPopMatrix();

			for (int i = 0; i < 3; i++) {
				glTranslatef(0.5, 0.0, 0.0);
				glRotatef((GLfloat)30, 0.0, 0.0, 1.0);
				glTranslatef(0.5, 0.0, 0.0);
				glPushMatrix();
					glScalef(2.0, 0.4, 1.0);
					glutSolidCube(0.5);
					/*if(i==2){
						glPushMatrix();
						//glRotatef((GLfloat)30, 0.0, 0.0, 1.0);
						glutSolidCone(0.5, 0.5, 20, 5);
						glPopMatrix();
					}*/
				glPopMatrix();
			}
		glPopMatrix();

		glPushMatrix();
			//glRotatef((GLfloat)-90, 0.0, 0.0, 1.0);
			glTranslatef(-0.5f, 0.0f, 0.0f);
			glRotatef(-90, 0.0, 1.0, 0.0);
			glRotatef(30, 1.0, 0.0, 0.0);
			glutSolidCone(0.25, 0.25, 20, 20);
		glPopMatrix();

		glPushMatrix();
			
		glPopMatrix();

	glPopMatrix();
	//glutSwapBuffers();
}

cola::~cola(){}