#include <stdio.h>
main(){
	int x,y;
	printf("\n Before swapping Enter The Value Of X & Y:");
	scanf("%d %d",&x,&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\n After Swapping the value of x & y :%d %d",x,y);
}
