#include <stdio.h>
int main(){
	int Student_ID;
	printf("one pizza is $8.\n");
	printf("25 percent Discount for Students If They Have an  Id Card");
	printf("\nYes = 1");
	 printf("\nNo = 0 ");
	printf("\nHave You a Student ID (Y/N) :");
	scanf("%d",&Student_ID);
	if(Student_ID == 1) {
	  printf("Your Total cost is $6");
    }
	 else if (Student_ID == 0) {
	  printf("Your  Total cost is $8");	
     } 
	return 0;
}
