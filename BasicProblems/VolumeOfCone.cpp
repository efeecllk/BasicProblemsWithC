#include <stdio.h>
#define PI 3.14
int main(){

	
	
	float radius=0,height=0, volumeCone;
	printf("Please Enter Radius: ");
	scanf("%f",&radius);
	printf("Please Enter Height: ");
	scanf("%f",&height);
	//I defined the PI above
	volumeCone=(PI*radius*radius*height)/3;
	printf("Volume of Cone: %.2f",volumeCone);
	
	
	
	
	
	
	
	
	
	

	
	
	return 0;
}
