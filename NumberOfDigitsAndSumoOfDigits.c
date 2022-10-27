#include <stdio.h>
int main(){
	//Sum of digits and Number Of Digits
	int number,digitNumber=0,total=0;
	printf("Write Number: ");
	scanf("%d",&number);
	do{
		total +=number%10;
		digitNumber++;
		number/=10;
		
		
	}
	while(number>0);
	printf("Sum of digits; %d\nNumber Of Digits: %d",total,digitNumber);
	
}
