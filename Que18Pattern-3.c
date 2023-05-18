#include <stdio.h>
main(){
	int i,j,k;
	for (i=1;i<=10;i++){
		if(i%2!=0){
			for (k=10;k>=i;k--){
			printf(" ");
			}	
			for (j=1;j<=i;j++){
			printf("* ");
			}
			printf("\n");
		}
			
	}
		
}
