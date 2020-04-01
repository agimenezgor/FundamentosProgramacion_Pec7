#include <stdio.h>
#include "plane.h"

int main (int argc, char** argv) {
	
	tPlane plane1;
	tPlane plane2;
	tPlane planePriority;
	
	planeRead(&plane1);
	planeRead(&plane2);
	
	planePriorized(plane1, plane2, &planePriority);
	
	planeWrite(planePriority);
	
	return 0;
}