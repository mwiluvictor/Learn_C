#include <stdio.h>

int main(){
	
	int leap, year;
	printf("Please input a year to check if it's a leap year.\n");
	scanf("%d", &year);

	if(year%4 == 0 && year%100 != 0 || year%400 == 0){
		printf("%d is a leap year.\n", year);
	}
	else{
		printf("%d is not a  leap year.\n", year);
	}	
}

