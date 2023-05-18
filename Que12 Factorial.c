#include <stdio.h>
main(){
	int Num,i,f=1;
	printf("\n Enter the Value Of Number:");
	scanf("%d",&Num);
		for(i=Num;i>=1;i--){
			f=f*i;
		}
		printf("\n The Facialtorial of %d (%d!)=%d",Num,Num,f);
	}
