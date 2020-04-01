#include <stdio.h>
#include "plane.h"


void planeRead(tPlane *plane){
	printf("Identifier for the plane (integer): \n");
	scanf("%d", &(*plane).id);
	printf("Model for the plane (string): \n");
	scanf("%s", &(*plane).model);
	printf("Year for the plane(integer): \n");
	scanf("%d", &(*plane).year);
	printf("Utility for the plane (enter a number being 0=COMMERCIAL, 1=PRIVATE, 2=GOVERNAMENTAL, 3=MILITAR, 4=EXPERIMENTAL, 5=OTHERS): . \n");
	scanf("%u", &(*plane).utility);
	printf("Percent occupation of the first class: \n");
	scanf("%f", &(*plane).percentOccupationFirstclass);
	printf("Percent occupation of the bussines class: \n");
	scanf("%f", &(*plane).percentOccupationBussines);
	printf("Percent occupation of the turist class: \n");
	scanf("%f", &(*plane).percentOccupationTurist);
	printf("Is the plane active? (true/false): \n");
	scanf("%u", &(*plane).isActive);
}

void planeWrite(tPlane plane){
	printf("Plane id: \n");
	printf("%d \n", plane.id);
	printf("Plane model: \n");
	printf("%s \n", plane.model);
	printf("Plane fabrication year: \n");
	printf("%d \n", plane.year);
	printf("Plane utility: \n");
	printf("%u \n", plane.utility);
	printf("Percent occupation of the first class: \n");
	printf("%.2f \n", plane.percentOccupationFirstclass);
	printf("Percent occupation of the bussines class: \n");
	printf("%.2f \n", plane.percentOccupationBussines);
	printf("Percent occupation of the turist class: \n");
	printf("%.2f \n", plane.percentOccupationTurist);
	printf("Is the plane active?: \n");
	printf("%u \n", plane.isActive);
}

int isFirstPlane(tPlane plane1, tPlane plane2){
	
	float totalAverage1;
	float totalAverage2;
	boolean priority;
	
	totalAverage1 = ((plane1.percentOccupationFirstclass + plane1.percentOccupationBussines + plane1.percentOccupationTurist) / 3);
	totalAverage2 = ((plane2.percentOccupationFirstclass + plane2.percentOccupationBussines + plane2.percentOccupationTurist) / 3);
	
	if (totalAverage1 > totalAverage2)
		priority = 1;
	else
		if (totalAverage1 < totalAverage2)
			priority = 0;
		else
			if (plane1.percentOccupationFirstclass > plane2.percentOccupationFirstclass)
				priority = 1;
			else
				if (plane1.percentOccupationFirstclass < plane2.percentOccupationFirstclass)
					priority = 0;
				else
					if (plane1.percentOccupationBussines > plane2.percentOccupationBussines)
						priority = 1;
					else
						if (plane1.percentOccupationBussines < plane2.percentOccupationBussines)
							priority = 0;
						else
							if (plane1.percentOccupationTurist > plane2.percentOccupationTurist)
								priority = 1;
							else
								if (plane1.percentOccupationTurist < plane2.percentOccupationTurist)
									priority = 0;
									else
										priority = 1;
	return (priority);
}


void planePriorized(tPlane plane1, tPlane plane2, tPlane *planePriority){
	
	int priority;
	
	priority = isFirstPlane(plane1, plane2);
	
	if (priority == 1){
		*planePriority = plane1;
	}else
		*planePriority = plane2;
	
	printf("\n\nData of the plane with priority to land: \n");
}
