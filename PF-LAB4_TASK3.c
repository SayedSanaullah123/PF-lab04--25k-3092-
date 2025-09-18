#include<stdio.h>
int main(){
	int Number_of_Pizzas;
	printf("How Many Pizzas You Want (1,2, or 3): ");
	scanf("%d",&Number_of_Pizzas);
	if(Number_of_Pizzas==1){
		printf("Total Cost Of One Pizza Is $8");
    }
	else if(Number_of_Pizzas==2){
	    printf("Total cost of Two  Pizzas is $15");
	}
	else if(Number_of_Pizzas==3){
	    printf("Total cost of Three Pizzas is $21");
	}
	else{
	    printf("Invalid Pizzas Number");
	}
	  return 0;
}
