#include<stdio.h>
int main()
{
	int n,totalBill=0;
	char choice;
	do
	{
	
	printf("\nChoose Option: \n");
	printf("1.South\n");
	printf("2.Gujarati\n");
	printf("3.Punjabi\n");
	printf("4.Rajsthani\n");
	
	printf("\nEnter no. to choose : ");
	scanf("%d",&n);
	char item;
	switch(n)
	{
		case 1:
			printf("	Choose Items..\n");
			printf("a. Idli - 50rs.\n");
			printf("b. Dhosa - 250rs.\n");
			printf("c. Mendu vada - 100rs.\n");
			printf("d. Uttpam - 50rs.\n");
			printf("Enter to choose  :");
			scanf(" %c",&item);
			switch(item)
			{
				case 'a':
					printf("You selected Idli\n");
        			//printf("Bill = Rs. 50");
        			totalBill += 50;
        			printf("Bill : %d",totalBill);
        			break;
        		case 'b':
        			printf("You selected Dhosa\n");
        			//printf("Bill = Rs. 250");
        			totalBill += 250;
        			printf("Bill : %d",totalBill);
        			break;
        		case 'c':
        			printf("You selected Mendu vada\n");
        			//printf("Bill = Rs. 100");
        			totalBill += 100;
        			printf("Bill : %d",totalBill);
        			break;
        		case 'd':
        			printf("You selected Uttpam\n");
        			//printf("Bill = Rs. 50");
        			totalBill += 50;
        			printf("Bill : %d",totalBill);
        			break;
			}
			break;
		case 2:
			printf("	Choose Items..\n");
			printf("a. Thepla - 100rs.\n");
			printf("b. Bhakhri - 200rs.\n");
			printf("c. Rotlo - 110rs.\n");
			printf("d. Ghughra - 80rs.\n");
			printf("Enter to choose  :");
			scanf(" %c",&item);
			switch(item)
			{
				case 'a':
					printf("You selected Thepla\n");
        			//printf("Bill = Rs. 100");
        			totalBill += 100;
        			printf("Bill : %d",totalBill);
        			break;
        		case 'b':
        			printf("You selected Bhakhri\n");
        			//printf("Bill = Rs. 200");
        			totalBill += 200;
        			printf("Bill : %d",totalBill);
        			break;
        		case 'c':
        			printf("You selected Rotlo\n");
        			//printf("Bill = Rs. 110");
        			totalBill += 110;
        			printf("Bill : %d",totalBill);
					break;
        		case 'd':
        			printf("You selected Ghughra\n");
        			//printf("Bill = Rs. 80");
        			totalBill += 80;
        			printf("Bill : %d",totalBill);
        			break;
			}
			break;
		case 3:
			printf("	Choose Items..\n");
			printf("a. Parotha - 50rs.\n");
			printf("b. Chhole - 220rs.\n");
			printf("c. Lassi - 60rs.\n");
			printf("d. Bhature - 90rs.\n");
			printf("Enter to choose  :");
			scanf(" %c",&item);
			switch(item)
			{
				case 'a':
					printf("You selected Parotha\n");
        			//printf("Bill = Rs. 50");
        			totalBill += 50;
        			printf("Bill : %d",totalBill);
        			break;
        		case 'b':
        			printf("You selected Chhole\n");
        			//printf("Bill = Rs. 220");
        			totalBill += 220;
        			printf("Bill : %d",totalBill);
        			break;
        		case 'c':
        			printf("You selected Lassi\n");
        			//printf("Bill = Rs. 60");
        			totalBill += 60;
        			printf("Bill : %d",totalBill);
        			break;
        		case 'd':
        			printf("You selected Bhature\n");
        			//printf("Bill = Rs. 90");
        			totalBill += 90;
        			printf("Bill : %d",totalBill);
        			break;
			}
			break;
		case 4:
			printf("	Choose Items..\n");
			printf("a. Kachori - 50rs.\n");
			printf("b. Ghevar - 250rs.\n");
			printf("c. Dal - Bati - 160rs.\n");
			printf("d. Mawa Kachori - 190rs.\n");
			printf("Enter to choose  :");
			scanf(" %c",&item);
			switch(item)
			{
				case 'a':
					printf("You selected Kachori\n");
        			//printf("Bill = Rs. 50");
        			totalBill += 50;
        			printf("Bill : %d",totalBill);
        			break;
        		case 'b':
        			printf("You selected Ghevar\n");
        			//printf("Bill = Rs. 250");
        			totalBill += 250;
        			printf("Bill : %d",totalBill);
        			break;
        		case 'c':
        			printf("You selected Dal - Bati\n");
        			//printf("Bill = Rs. 160");
        			totalBill += 160;
        			printf("Bill : %d",totalBill);
        			break;
        		case 'd':
        			printf("You selected Mawa Kachori\n");
        			//printf("Bill = Rs. 190");
        			totalBill += 190;
        			printf("Bill : %d",totalBill);
        			break;
			}
			break;
	}
	printf("\nDo you want to order more? (y/n): ");
    scanf(" %c", &choice);
	}
	while(choice=='y'|| choice=='Y');
    printf("\nFinal Bill = %d\n", totalBill);

	return 0;
}
