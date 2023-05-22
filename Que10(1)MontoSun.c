#include <stdio.h>
main(){
	int ch;
	printf("\n press 1 for Day1.");
	printf("\n press 2 for Day2.");
	printf("\n press 3 for Day3.");
	printf("\n press 4 for Day4.");
	printf("\n press 5 for Day5.");
	printf("\n press 6 for Day6.");
	printf("\n press 7 for Day7.");
	printf("\n enter choice:");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("\n It's Monday");
		break;
		case 2:
			printf("\n It's Tuesday");
		break;
		case 3:
			printf("\n It's Wednesday");
		break;
		case 4:
			printf("\n It's Thursday");
		break;
		case 5:
			printf("\n It's Friday");
		break;
		case 6:
			printf("\n It's Saturday");
		break;
		case 7:
			printf("\n It's Sunday");
		break;
		default:
			printf("\n It's wrong choice");
		break;
	}
}
