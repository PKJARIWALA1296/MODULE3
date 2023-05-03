#include <stdio.h>
main(){
	int days,week,year,month;
	printf("\n Enter the No.of days:");
	scanf("%d",&days);
	year=days/365;
	month=(days % 365)/30;
	days=(days-(year*365)-(month*30));
	printf("\n After Converting days into Year=%d",year);
	printf("\n                           month=%d",month);
	printf("\n 			    days=%d",days);
	printf("\n---------------------------------------------------------");
	printf("\n Enter the No.of year:");
	scanf("%d",&year);
	days=year*365;
	printf("\n After Converting Year into days =%d",days);
	
}
