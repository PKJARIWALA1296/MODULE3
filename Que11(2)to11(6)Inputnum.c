#include<stdio.h>
main(){
	int i,num,sumEven=0,sumodd=0,even=0,odd=0;
	printf("\t Input the 10 numbers  \n");
	for (i=1;i<=10;i++){
		printf("\n Enter the Number - %d :",i);
		scanf("%d",&num);
		if (num%2==0){
			sumEven+=num;
			even++;
		}
		else{
			sumodd+=num;
			odd++;
		}	
	} 
		printf("\n Sum Of Even Number = %d \t Total No of Even Number=%d",sumEven,even);
		printf("\n Sum Of Odd Number = %d \t Total No of Odd Number=%d",sumodd,odd);
}
