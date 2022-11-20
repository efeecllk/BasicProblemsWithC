#include <stdio.h>
int main(){
	int tickets=0;
	char partOfWeek,a='%';
	float priceOfWeekday=20,priceOfWeekend=30;
	float totalWD,totalWE,discount;
	printf("How many tickets do you want?(1-100)\n");
	scanf("%d",&tickets);
   if(tickets>=1 && tickets<=100){
   	
	printf("Will you buy a ticket for the Weekend? (y,Y for YES - n,N for NO)\n");
	scanf(" %c",&partOfWeek);
	totalWE=tickets*priceOfWeekend;
	totalWD=tickets*priceOfWeekday;
	if(tickets>=1 && tickets<=5){
		switch(partOfWeek){
			case 'y':
			case 'Y':
				printf("Discount: %%0\n");
				printf("Fee per ticket: %.2f TL\n",priceOfWeekend);
				printf("Total fee: %.2f TL",totalWE);
				break;
			case 'n':
			case 'N':	
				printf("Discount: %%0\n");
				printf("Fee per ticket: %.2f TL\n",priceOfWeekday);
				printf("Total fee: %.2f TL",totalWD);
				break;
				default:
					printf("Wrong Input!!!");		
		}
	}
	else if(tickets>=6 && tickets<=20){
		switch(partOfWeek){
			case 'y':
			case 'Y':
			    discount=(tickets*0.2);
				priceOfWeekend-=(priceOfWeekend*discount)/100;
				totalWE=priceOfWeekend*tickets;
				printf("Discount: %%%f\n",discount);
				printf("Fee per ticket: %.2f TL\n",priceOfWeekend);
				printf("Total fee: %.2f TL",totalWE);
				break;
			case 'n':
			case 'N':
				discount=(tickets*0.3);
				priceOfWeekday-=(priceOfWeekday*discount)/100;
				totalWD=priceOfWeekday*tickets;
				printf("Discount: %c%.1f\n",a,discount);
				printf("Fee per ticket: %.2f TL\n",priceOfWeekday);
				printf("Total fee: %.2f TL",totalWD);
				break;
				default:
					printf("Wrong Input!!!");		
		}
	}
	else if(tickets>=21 && tickets<=100){
		switch(partOfWeek){
			case 'y':
			case 'Y':
			    discount=(tickets*0.4);
				priceOfWeekend-=(priceOfWeekend*discount)/100;
				totalWE=priceOfWeekend*tickets;
				printf("Discount: %c%.1f\n",a,discount);
				printf("Fee per ticket: %.2f TL\n",priceOfWeekend);
				printf("Total fee: %.2f TL",totalWE);
				break;
			case 'n':
			case 'N':
				discount=(tickets*0.5);
				priceOfWeekday-=(priceOfWeekday*discount)/100;
				totalWD=priceOfWeekday*tickets;
				printf("Discount: %c%.1f\n",a,discount);
				printf("Fee per ticket: %.2f TL\n",priceOfWeekday);
				printf("Total fee: %.2f TL",totalWD);
				break;
				default:
					printf("Wrong Input!!!");		
		}
	}
	else{
		printf("Wrong Input!!!");
	}
   }
   else{
   	printf("Wrong Input!!!");
   }  
		return 0;
	}


