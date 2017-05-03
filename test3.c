#include <stdio.h>
#include <string.h>
void main()
{
	char name[20],iname[20];
	int i=0,n,j=0;
	printf("Name: ");
	gets(name);
	 n = strlen(name);
	for(i=0;i<n;i++)
	{
		if(name[i]=='a'||name[i]=='i'||name[i]=='e'||name[i]=='o'||name[i]=='u')
			name[i]=' ';
		else
			iname[j++]=name[i];
	}
	iname[i]='\0';
	printf("%s",name);
}
