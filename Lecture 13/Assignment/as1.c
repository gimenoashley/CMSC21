#include <stdio.h>
#include <math.h>

//variable declaration with structure declaration
struct line{
	struct point{
		float x;
		float y;
	}pt1, pt2, midpoint;
	float slope;
	float distance;
};
//function to find the slope
float solveSlope (struct line line1){
    line1.slope = (line1.pt2.y - line1.pt1.y)/(line1.pt2.x-line1.pt1.x);
	return line1.slope;
}
//function to find the midpoint
struct line solveMidpoint(struct line line1){
    line1.midpoint.x = (float)((line1.pt1.x+line1.pt2.x)/2.0);
	line1.midpoint.y = (float)((line1.pt1.y+line1.pt2.y)/2.0);
	return line1;
}
//function to find the distance
float solveDistance (struct line line1){
    line1.distance = sqrt(pow(line1.pt2.x-line1.pt1.x, 2)+ pow(line1.pt2.y-line1.pt1.y, 2));
	return line1.distance;
}
//prints slope-intercept form
void getSlopeInterceptForm(struct line line1){
    float b;
	b = line1.pt1.y - (line1.pt1.x*solveSlope(line1));
	printf("Slope Intercept Form: %fx + %f", solveSlope(line1), b);
}

//main function
int main(void){
	struct line l;
    //asks for inputs
	printf("Enter x and y for point 1: ");
	scanf("%f%f", &l.pt1.x, &l.pt1.y);
	printf("Enter x and y for point 2: ");
	scanf("%f%f", &l.pt2.x, &l.pt2.y);
	//calls functions and prints results
	printf("Slope: %f \n", solveSlope(l));
	printf("Midpoint: %f, %f \n", solveMidpoint(l).midpoint.x, solveMidpoint(l).midpoint.y );
	printf("Distance: %f \n", solveDistance(l));
	getSlopeInterceptForm(l);

return 0;
}
