#include <stdio.h>
main(){
	int num,rem,rev=0;
	printf("\n Enter the Number :");
	scanf("%d",&num);
		while(num!=0){
			rem=num%10;
			num=num/10;
			rev=rev+rem;
		}
		printf("\n Summation of Given Number is %d",rev);
	}
