#include<stdio.h>
 
 struct studentinformation
 {
 	char studname[100];
 	char usn[100];
 	float coa,dm,ds,ld,java,mp;
 }
 main()
 {
 	struct studentinformation s1;
 	printf("Enter the Name of the student: \n");
 	scanf("%s",&s1.studname)
 	printf("Enter the USN of the student: \n");
 	scanf("%s",&s1.usn);
 	printf("Enter marks of 6 subjects:\n");
 	scanf("%f",&s1.coa);
 	scanf("%f",&s1.dm);
 	scanf("%f",&s1.ds);
 	scanf("%f",&s1.ld);
 	scanf("%f",&s1.java);
 	scanf("%f",&s1.mp);
	printf("Student Name: %s \n",s1.studname);
	printf("Student USN: %s \n",s1.usn);
 	printf("Marks: \n %f \n %f \n %f \n %f \n %f \n %f \n",s1.coa,s1.dm,s1.ds,s1.ld,s1.java,s1.mp);
 }