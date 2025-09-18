#include<stdio.h>
int main() {
	int Delivery;
	printf("Pizza cost is $8 ; If you want to deliver pizza at you home you should pay extra $3. \n");
	printf("delivery = 1 \n");
	printf("pickup = 0\n");
	printf("You want delivery or pickup: ");
	scanf("%d",&Delivery);
	if(Delivery==1) {
	printf("\nTotal Cost of your pizza is $11 ");
}     else if(Delivery==0) {
	printf("Total Cost is $8");
}      else {
	printf("Invalid input");
}

	return 0;
}
