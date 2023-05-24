#include <stdio.h>
main(){
	int Num,i,f,x1=0,x2=1;
	printf("\n Enter the value of Number:");
	scanf("%d",&Num);
	printf ("the Fibbonacci series of %d is 0 \t 1",Num);
	for (i=0;i<=Num;i++){
		f=x1+x2;
		x1=x2;
		x2=f;
		printf("\t %d",f);
	}
	
}
