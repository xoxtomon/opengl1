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
class Tetera
{

	public:
		Tetera();

		void DibujarTetera(float szs, float tX, float tY, float tZ);

		~Tetera();

};

