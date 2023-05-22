#include<stdio.h>
main(){
	int i,a[10],max=0;
	for(i=0;i<10;i++){
		printf("\n Enter the a[%d] :",i+1);
		scanf("%d",&a[i]);
		if(max<a[i]){
			max=a[i];	
		}
	}
	printf("\n Max Number is %d",max);
}
