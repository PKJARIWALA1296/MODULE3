#include<stdio.h>
main (){
	int num,rem,rev=0;
	printf("\n Enter the Number :");
	scanf("%d",&num);
		while(num!=0){
			rem=num%10;
			rev=rev*10+rem;
			num=num/10;
		}
	printf("\n Reverse Order of Given Number = %d",rev);
}
