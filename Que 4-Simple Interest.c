#include <stdio.h>
main(){
	int P,R,N;
	float I;
	printf("\n Enter The Value Of P,R & N:");
	scanf("%d %d %d",&P,&R,&N);
	I=P*R*N/100;
	printf("\n simple Interest=%f",I);
}
