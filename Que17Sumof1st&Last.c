#include <stdio.h>
main(){
	int num,rem,lastdigit,firstdigit,sum;
	printf("\n Enter the Number :");
	scanf("%d",&num);
		lastdigit=num%10;
		while(num!=0){
			rem=num%10;
			num=num/10;
			firstdigit=rem;
		}	
		sum=lastdigit+firstdigit;
		printf("\n Summation of First and Last Digit is %d",sum);
	}
