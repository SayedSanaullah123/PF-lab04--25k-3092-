#include <stdio.h>
int main(){
	int pizzas;
	printf("If You  order Three Pizzas with Stuffed Crust You  Can Get free Garlic Bread");
    printf("\nYES = 1");
    printf("\nNO = 0");
	printf("\nHow many pizzas do  you want to  order  : ");
	scanf("%d",&pizzas);	
    if (pizzas== 1){
    	printf("\nYou Get Free garlic bread");
	}else if(pizzas == 0){
		printf("You can not get free garlic bread");
	}
	return 0;
}
