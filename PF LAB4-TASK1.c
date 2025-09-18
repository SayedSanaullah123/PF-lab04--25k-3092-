#include <stdio.h>
int  main(){
	int  Pizza;
	printf("Small=1  \nMedium =2 \nLarge=3");
	printf("\nEnter The Number From 1 to 3 to Choose Pizza Size : ");
	scanf("%d",&Pizza);
	 
	 if (Pizza==1){
	 	printf("small Pizza");
	}else if(Pizza==2){
		printf("Medium  Pizza");
	}else if(Pizza==3){
		printf("Large Pizza");
	}else{
	 printf("Invalid Number");
    }
    return 0;
}
