#include<stdio.h>
#include<string.h>
struct Student{
	int rollno;
	char name[20],subject[10];	
};
union product{
	int prodId,prodRate;
	char prodname[10];
}doc2;
main(){
	struct Student s[3];
	int i;
	for (i=0;i<3;i++){
		printf("\n %d Enter the Roll No\t Name\t Subject",i+1);
		scanf("%d %s %s",&s[i].rollno,s[i].name,s[i].subject);
		}
	for (i=0;i<3;i++){
		printf("\n %d Roll No=%d \t Name=%s \t Subject=%s",i+1,s[i].rollno,s[i].name,s[i].subject);
		}
		printf("\n");
	{	union product doc1;
				printf("Record 1 \n");
				doc1.prodId =12;
					printf("%d \n",doc1.prodId);
				strcpy(doc1.prodname,"Dell Laptop");
					printf("%s \n",doc1.prodname);
				doc1.prodRate=45000;
					printf("%d \n",doc1.prodRate);
				printf("\n");
		union product doc2;
				printf("Record 2 \n");
				doc2.prodId= 14;
					printf("%d \n",doc2.prodId);
				strcpy(doc2.prodname,"HP Laptop");
					printf("%s \n",doc2.prodname);
				doc2.prodRate=43000;
					printf("%d \n",doc2.prodRate);
				printf("\n");
		union product doc3;
				printf("Record 3 \n");
				doc3.prodId= 17;
					printf("%d \n",doc3.prodId);
				strcpy(doc3.prodname,"Lenovo Laptop");
					printf("%s \n",doc3.prodname);
				doc3.prodRate=48000;
					printf("%d \n",doc3.prodRate);
 }
}
