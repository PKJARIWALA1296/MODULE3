#include <stdio.h>
main(){
	int ch;
	printf("\n press 1 for Monday.");
	printf("\n press 2 for Tuesday.");
	printf("\n press 3 for Wednesday.");
	printf("\n press 4 for Thursday.");
	printf("\n press 5 for Friday.");
	printf("\n press 6 for Saturday.");
	printf("\n press 7 for Sunday.");
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
