#include <stdio.h>
main(){
	int A,B,add,sub,multi,modu;
	float div;
	printf("\n Enter the Value Of A & B :");
	scanf("%d %d",&A,&B);
	add=A+B;
	printf("\n Addition= %d",add);
	sub=A-B;
	printf("\n Subtraction= %d",sub);
	multi=A*B;
	printf("\n Multiplication= %d",multi);
	div=A/B;
	printf("\n Division= %f",div);
	modu=A%B;
	printf("\n Modulation= %d",modu);
}
