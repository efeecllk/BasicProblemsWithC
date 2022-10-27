#include <stdio.h>

int main(){
	
    int midterm=0,final=0;
	float midtermWeight=0,finalWeight=0,average=0;
	printf("Please Write Your Midterm Grade: ");
	scanf("%d",&midterm);
	printf("Please Write Your Final Grade: ");
	scanf("%d",&final);
	
	printf("Please Write Your Midterm Weight: ");
	scanf("%f",&midtermWeight);
	printf("Please Write Your Final Weight: ");
	scanf("%f",&finalWeight);
	
	
	average=midterm*midtermWeight+final*finalWeight;
	printf("Student's average:%.2f",average);
	
	
	
	
	
	
	
	
	
	
	
	
	

	
	
	return 0;
}
