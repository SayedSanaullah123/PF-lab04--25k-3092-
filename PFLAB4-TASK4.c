#include<stdio.h>
int main() {
	int crust_type;
	    printf("Regular Crust = 1");
	        printf("\nThin Crust = 2");
	           printf("\nStuffed Crust = 3");
	printf("\nWhich Type of Crust You Like the Most  ? =");
	scanf("%d",&crust_type);
	
	if (crust_type==1){
	    printf("The Regular Crust Pizza is  Free for You ");
	}
	else if(crust_type ==2){
	   printf("The total cost of your Thin Crust Pizza is just  $1 ; Enjoy it");
	}else if(crust_type ==3){
	   printf("The Total Cost Of Your stuffed crust pizza is only $2");
	}
		return 0;
}
