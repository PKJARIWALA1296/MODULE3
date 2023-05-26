#include<stdio.h>
struct Employee{
	int empno,age;
	char empname[15],address[30];
};
main(){
	struct Employee s[5];
	int i;
	for (i=0;i<5;i++){
		printf("\n Enter Employee No :");
	scanf("%d",&s[i].empno);
	printf("\n Enter Employee Name :");
	scanf("%s",s[i].empname);
	printf("\n Enter Employee Age :");
	scanf("%d",&s[i].age);
	printf("\n Enter Employee Address :");
	scanf("%s",s[i].address);
			}
	printf("\nSr.No\tEmpNo\tEmpName\tEmpAge\tEmpAddress");		
	for (i=0;i<5;i++){
		printf("\n %d\t %d",i+1,s[i].empno);
		printf("\t %s",s[i].empname);
		printf("\t %d",s[i].age);
		printf("\t %s",s[i].address);
	}
}
