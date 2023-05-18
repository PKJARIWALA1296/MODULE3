#include<stdio.h>
main(){
	int i,num,max=0,rem=0;
	printf("\n Enter the Number :");
	scanf("%d",&num);
	while(num!=0){
		rem=num%10;
		num=num/10;
		    if(max<rem){
			max=rem;
		}
	}
	printf("\n Max Number is %d",max);
}
