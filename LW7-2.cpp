#include <stdio.h>
int main(){
  int i,j,arr[10],values, integer,x=0,y;
  printf("Fill an array with 10 integers: ");
  for(i=0;i<10;i++)	
  { 
   scanf("%d",&values);
  	arr[i]=values;
  	
  	
  	
  	
  }
   printf("Frequency of which integer?: ");
   scanf("%d",&integer);
   for(j=0;j<10;j++){
   	y=arr[j];
   	if(integer==y){
   	    x++;	
	   }
   }
   printf("The frequency of %d is: %d",integer,x);
 	return 0;
}
