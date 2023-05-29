/*
Difference between Structure and Union is 
"The Size of structure is the sum of the size of all data members and the packing size.
The size of the Union is the size of its data member,which is largest in size."
*/
#include<stdio.h>
#include<string.h>
struct Student{
	int rollno;
	char name[20],subject[10];	
};
union product{
	int prodId,prodRate;
	char prodname[10];
};
main(){
	struct Student s[3];
	union product p1;
	int i;
	for (i=0;i<3;i++){
		printf("\n %d Enter the Roll No\t Name\t Subject",i+1);
		scanf("%d %s %s",&s[i].rollno,s[i].name,s[i].subject);
		}
	for (i=0;i<3;i++){
		printf("\n %d Roll No=%d \t Name=%s \t Subject=%s",i+1,s[i].rollno,s[i].name,s[i].subject);
		}
		printf("\n");
		printf("\n Enter union value");
		printf("\n");
		printf("\n Enter the Product ID\t Product Rate\t Product Name");
		scanf("%d %d %s",&p1.prodId,&p1.prodRate,p1.prodname);
		printf("\n Product ID=%d \t Product Rate=%d \t Product Name=%s",p1.prodId,p1.prodRate,p1.prodname);
}
