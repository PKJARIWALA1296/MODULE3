#include <stdio.h>
main(){
	int year;
	printf("\n Enter the Year:");
	scanf("%d",&year);
	(year%4==0)? printf("\n Given Year is Leap Year"):printf("\n Given Year is normal Year");
}
