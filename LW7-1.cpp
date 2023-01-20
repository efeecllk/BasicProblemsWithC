#include  <stdio.h>
int main(){
	int i,j;
	float sum=0,average,num;
	float arr[i];
	printf("Length of the array?");
	scanf("%d",&i);
	printf("Fill the array with %d integers: ",i);
for(j=0;j<i;j++){
		
		scanf("%f",&num);
		arr[j]=num;
		sum+=arr[j];
	}
	printf("Sum = %.1f\n",sum);
	average=sum/i;
	printf("Average = %.1f",average);
	return 0;
}
