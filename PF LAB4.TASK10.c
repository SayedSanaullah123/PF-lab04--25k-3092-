#include <stdio.h>
int  main(){
	int  Pizza;
	printf("Small=1  \nMedium =2 \nLarge=3");
	printf("\nEnter The Number From 1 to 3 to Choose Pizza Size : ");
	scanf("%d",&Pizza);
	 
	 if (Pizza==1){
	 	printf(" = small Pizza");
	}else if(Pizza==2){
		printf(" = Medium  Pizza");
	}else if(Pizza==3){
		printf(" = Large Pizza\n");
	}else{
	 printf(" = Invalid Number\n");
    }
    printf("\n");
         printf("\n");
    int Small_Pizza;
	printf("A Small pizza Cost $8");
	printf("\nHow many pizza you want :");
	scanf("%d",&Small_Pizza)	;
	
	if(Small_Pizza == 1){
	
	    printf(" = Your total is $8");
	}
	else{
	    printf(" = Check Our Multi-Pizza Deals");
	}
	printf("\n");
	printf("\n");
	
	int Number_of_Pizzas;
	printf("\nHow Many Pizzas You Want (1,2, or 3): ");
	scanf("%d",&Number_of_Pizzas);
	if(Number_of_Pizzas==1){
		printf(" = Total Cost Of One Pizza Is $8");
    }
	else if(Number_of_Pizzas==2){
	    printf(" = Total cost of Two  Pizzas is $15");
	}
	else if(Number_of_Pizzas==3){
	    printf(" = Total cost of Three Pizzas is $21");
	}
	else{
	    printf(" = Invalid Pizzas Number");
	}
	printf("\n");
	printf("\n");
	
	int crust_type;
	    printf("\nRegular Crust = 1");
	        printf("\nThin Crust = 2");
	           printf("\nStuffed Crust = 3");
	printf("\nWhich Type of Crust You Like the Most  ? =");
	scanf("%d",&crust_type);
	
	if (crust_type==1){
	    printf(" = The Regular Crust Pizza is  Free for You ");
	}
	else if(crust_type ==2){
	   printf(" = The total cost of your Thin Crust Pizza is just  $1 ; Enjoy it");
	}else if(crust_type ==3){
	   printf(" = The Total Cost Of Your stuffed crust pizza is only $2");
	}
	printf("\n");
	printf("\n");
	
	int Extra_Cheese;
	printf("Price of single pizza is $8");
	printf("\nYes = 1");
	printf("\nNo = 2");
	printf("\nDo You Want Extra Cheese (Y/N) : ");
	scanf("%d",&Extra_Cheese);
	if (Extra_Cheese==1) {
		printf("\nTotal cost of pizza is  $9.50");
	}
	else if ("Extra_Cheese ==2"){
	
		printf("Your total cost  of pizza is just $8");
	}
	
	          printf("\n");
	          printf("\n");
	          
		int time; 
		printf("\nOne Pizza = 100 Rs\n");
		printf("Get a Huge Dicount of 10 perccent From 11AM to 2PM :");
		printf("\nWhat's Time Now (0-23) = ");
		scanf("%d",&time);
		
		if(time>=11 && time<=14){
		printf("\n  = The total  price of your pizza is 90 Rs with 10 percent Discount");
		}else{
			printf("\n = The Discount Time is  Over; Soory You should pay completely");
		} 
		
		printf("\n");
		printf("\n");
		
			int Student_ID;
	printf("\none pizza is $8.\n");
	printf("25 percent Discount for Students If They Have an  Id Card");
	printf("\nYes = 1");
	 printf("\nNo = 0 ");
	printf("\nHave You a Student ID (Y/N) :");
	scanf("%d",&Student_ID);
	if(Student_ID == 1) {
	  printf(" = Your Total cost is $6");
    }
	 else if (Student_ID == 0) {
	  printf(" = Your  Total cost is $8");	
     } 
         printf("\n");
         printf("\n");
     
     	int pizzas;
	printf("\nIf You  order Three Pizzas with Stuffed Crust You  Can Get free Garlic Bread");
    printf("\nYES = 1");
    printf("\nNO = 0");
	printf("\nHow many pizzas do  you want to  order  : ");
	scanf("%d",&pizzas);	
    if (pizzas== 1){
    	printf("\n = You Get Free garlic bread");
	}else if(pizzas == 0){
		printf(" = You can not get free garlic bread");
	}
	   printf("\n");
	   printf("\n");
	
	int Delivery;
	printf("\nPizza cost is $8 ; If you want to deliver pizza at you home you should pay extra $3. \n");
	printf("delivery = 1 \n");
	printf("pickup = 0\n");
	printf("You want delivery or pickup: ");
	scanf("%d",&Delivery);
	if(Delivery==1) {
	printf("\n = Total Cost of your pizza is $11 ");
}     else if(Delivery==0) {
	printf(" = Total Cost is $8");
}      else {
	printf(" = Invalid input");
}
	
    return 0;
}
