#include <stdio.h>
#define max_model_char 15

	// tipo enumerado tUtility
	typedef enum {COMMERCIAL, PRIVATE, GOVERNAMENTAL, MILITAR, EXPERIMENTAL, OTHERS} tUtility;
	
	// tipo boolenao isActive
	typedef enum {FALSE, TRUE} boolean;
	
	// tipo estructurado tPlane
	typedef struct{
		int id;
		char model[max_model_char];
		int year;
		tUtility utility;
		float percentOccupationFirstclass;
		float percentOccupationBussines;
		float percentOccupationTurist;
		boolean isActive;
	}tPlane;
	
	// cabeceras acciones y funciones
	void planeRead(tPlane *plane);
	
	void planeWrite(tPlane plane);
	
	int isFirstPlane(tPlane plane1, tPlane plane2);
	
	void planePriorized(tPlane plane1, tPlane plane2, tPlane *planePriority);




