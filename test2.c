#include <stdio.h>
#include <string.h>
int main()
{
	char name[20],First[10],Last[10];
	int i=0,j=0,length;
	printf("Name: ");
	scanf("%s",&name);
	length=strlen(name);
	do
	{
		First[i]=name[i];
		i++;
	}while(name[i]>=97);
	do 
	{
		Last[j]=name[i];
		j++; i++;
	}while(i<=length);
	printf("\nFirst_Name: %s",First);
	printf("\nLast_Name: %s",Last);
	return 0;
}