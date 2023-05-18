#include <stdio.h>
main(){
	int Num,i,f=0;
	printf("\n Enter the value of Number:");
	scanf("%d",&Num);
	printf ("the Fibonacci series of %d :-",Num);
	for (i=0;i<=Num;i++){
		f=f+i;
		printf("\t %d",f);
	}
	
}
