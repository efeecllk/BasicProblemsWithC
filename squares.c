#include <stdio.h>
int main()
{
	int num1,num2,i,j,square=0,sum=0,numberOfsquare=0;
	float average;
	
	for(j=1;j==1;)
	{
	  printf("Enter an interval of integers: ");
	  scanf("%d %d",&num1,&num2);
	  if(num1>num2)
	 {
		printf("Wrong interval. Try again.\n");	
	 }
	 else
	 {	
	 	printf("Square numbers are between %d and %d: ",num1,num2);
		for(i=0;i<=num2;i++){
			square=i*i;
			
			if(square>=num1 && square<=num2){
				printf("%d ",square);
				sum+=square;
				numberOfsquare++; 
			}
		}
		printf("\nThere are %d numbers",numberOfsquare);
	
		printf("\n");	 	
	   j=0;
	 }
	}
	average=sum/(float)numberOfsquare;
	printf("Their sum is %d\n",sum);
	printf("Their average is %.1f\n",average);
	return 0;
}
