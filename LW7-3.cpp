#include <stdio.h>
int main(){
 	int arr[10],num,i,evens=0,odds=0,k,l,j,evenValue,oddValue;
 	printf("Enter 10 integers: ");
 	for(i=0;i<10;i++){
	  
	 num=arr[i];
 	 scanf("%d",&num);
 	 if(num%2==0){
 	 	evens++;
 	 	
 	 	
	  }else{
	  	odds++;
	  }
	  }
	  int evenArr[evens],oddArr[odds];
	  
	  
	  num=arr[j];
	  printf("Even integers ");
	  for(k=0;k<evens;k++){
	  	if(arr[j]%2==0){
	  		oddValue=oddArr[k];
	  		printf("%d ",oddValue);
		  }
	  }
	  printf("Odd integers ");
	  for(l=0;l<odds;l++){
	  	if(arr[j]%2==1){
	  		evenValue=evenArr[l];
	  		printf("%d ",evenValue);
		  }
	  }
	  
 	 
	  
	  
	  printf("Number of even integers %d",evens);
	   printf("Even integers ");
	 
	  printf("Number of odd integers %d",odds);
	  printf("Odd integers ");
	  
	  return 0;
}
