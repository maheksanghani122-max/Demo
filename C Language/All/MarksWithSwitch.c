#include<stdio.h>
int main()
{
	int marks;
	char grade;
	printf("Enter Marks = ");
	scanf("%d", &marks);
	
	if(marks>90)
	{
		grade = 'A';
	}
	else if(marks>80)
	{
		grade = 'B';
	}
	else
	{
		grade = 'C';
	}
	
	switch(grade)
	{
		case 'A':
			printf("Marks = %d & Grade = %c",marks,grade);
			break;
		case 'B':
			printf("Marks = %d & Grade = %c",marks,grade);
			break;
		case 'C':
			printf("Marks = %d & Grade = %c",marks,grade);
			break;
	}
}
