#include <stdio.h>
#include <conio.h>
void decToBin(int);
void decToOcta(int);
void decToHexa(int);
void main()
{
	int num;
	puts("**** Welcome ****");
	printf("Input positive number: ");
	scanf("%d",&num);
	clrscr();
	printf("Your number : %d\n",num);
	nene:
	puts("1. Dec-Bin");
	puts("2. Dec-Octa");
	puts("3. Dec-Hexa");
	switch(getch())
	{
		case '1': 
			clrscr();
			printf("\nYour number : %d\n",num);
			decToBin(num); break;
		case '2': 
			clrscr();
			printf("\nYour number : %d\n",num);
			decToOcta(num); break;
		case '3':
			clrscr();
			printf("\nYour number : %d\n",num);
			decToHexa(num); break;
	}   getch(); clrscr(); goto nene;
}
void decToBin(int n)
{
	int bin[20],i=0,j;
	while(n!=0)
	{
		bin[i++]=n%2;
		n/=2;
	}
	printf("decToBin: ");
	for(j=i-1;j>=0;j--)
		printf("%d",bin[j]);
}
void decToOcta(int n)
{
	int bin[20],i=0,j;
	while(n!=0)
	{
		bin[i++]=n%8;
		n/=8;
	}
	printf("decToOcta : ");
	for(j=i-1;j>=0;j--)
		printf("%d",bin[j]);	
}
void decToHexa(int n)
{
	int bin[20],i=0,j;
	while(n!=0)
	{
		bin[i++]=n%16;
		n/=16;
	}
	printf("decToHexa : ");
	for(j=i-1;j>=0;j--)
		printf("%d",bin[j]);	
}
