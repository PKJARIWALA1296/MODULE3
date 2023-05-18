#include<stdio.h>
main(){
	int i,j;
	for(i=0;i<=5;i++){
		for(j=0;j<=i;j++){
			printf(" *");
		}
		printf("\n");
	}
	for(i=6;i<=10;i++){
		for(j=10;j>=i;j--){
			printf(" *");
		}
		printf("\n");
	}
}
