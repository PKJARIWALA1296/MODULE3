#include <stdio.h>
main(){
	int i,num;
	printf("\n Enter The Number");
	scanf("%d",&num);
	printf("\n");
	printf("\t  Table Of %d \n",num);
	printf("\t **************** \n");
	for(i=1;i<=10;i++){
		printf("\t  %d * %d = %d \n",num,i,num*i);
	}
}
