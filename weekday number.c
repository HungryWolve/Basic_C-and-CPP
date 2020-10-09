#include<stdio.h>
main()
{
	int wDay;
	printf("Enter any one weekday number between (1 to 7): ");
	scanf("%d",&wDay);
	
	switch(wDay)
	{
		case 1:
			printf("It is SUNDAY");
			break;
		
		case 2:
			printf("It is MONDAY");
			break;
		
		case 3:
			printf("It is TUESDAY");
			break;
		
		case 4:
			printf("It is WEDNESDAY");
			break;
		
		case 5:
			printf("It is THURSDAY");
			break;
		
		case 6:
			printf("It is FRIDAY");
			break;
		
		case 7:
			printf("It is SATURDAY");
			break;
		
		default:
			printf("Invalid weekday number");
			break;
	}
}
