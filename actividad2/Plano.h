//=============================================================================
// Sample Application: Lighting (Per Fragment Phong)
//=============================================================================

#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>

//-----------------------------------------------------------------------------

#pragma once
class Plano
{
	public:
		Plano();

		void DibujarPlano(float dX, float dY);

		~Plano();
};

