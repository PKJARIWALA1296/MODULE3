#include <stdio.h>
main(){
	int i,j,m;
	for (i=1;i<=5;i++){
		m='A';
		for (j=1;j<=i;j++){
			printf("\t %c",m);
			m++;	
		}
		printf("\n");
		printf("\n");
	}
}
