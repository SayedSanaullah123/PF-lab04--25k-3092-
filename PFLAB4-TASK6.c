#include<stdio.h>
int main() {
		int time; 
		printf("One Pizza = 100 Rs\n");
		printf("Get a Huge Dicount of 10 perccent From 11AM to 2PM :");
		printf("\nWhat's Time Now (0-23) = ");
		scanf("%d",&time);
		
		if(time>=11 && time<=14){
		printf("\nThe total  price of your pizza is 90 Rs with 10 percent Discount");
		}else{
			printf("\nThe Discount Time is  Over; Soory You should pay completely");
		} 
	return 0;
}
