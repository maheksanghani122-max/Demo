//Gross Salary = Basic + HRA + DA + Allow – PF
//Here, HRA = 20% of Basic 
//DA = 50% of basic 
//Allow = 1700 if grade = ‘A’ 
//Allow = 1500 if grade = ‘B’ 
//Allow = 1300 if grade = ‘C’ 
//PF = 11% of basic

#include<stdio.h>
int main()
{
	float gs,basic,hra,da,allow,pf;
	char grade;
	
	printf("Enter Basic Salary = ");
	scanf("%f",&basic);

	printf("Enter Grade (A/B/C) = ");
	scanf(" %c",&grade);
		
	hra = basic * 20/100;
	da = basic * 50/100;
	if(grade=='A')
	{
		allow=1700;
	}
	else if(grade=='B')
	{
		allow=1500;
	}
	else
	{
		allow=1300;
	}
	pf = basic *11/100;
	gs = basic + hra + da + allow - pf;
	printf("Gross Salary : %f",gs);
}
