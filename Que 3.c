#include<stdio.h>
main(){
	int a,b,r,rect,tri;
	float cir;
	const float pi=3.14;
	printf("\n Enter The Value Of a & b:");
	scanf("%d %d",&a,&b);
	rect=a*b;
	printf("\n Area of Rectangle= %d",rect);
	tri=0.5*a*b;
	printf("\n Area of Triangle=%d",tri); 
	printf("\n Enter The Value Of r:");
	scanf("%d",&r);
	cir=22/7*r*r;
	printf("Area Of Circle =%f",cir);
}
