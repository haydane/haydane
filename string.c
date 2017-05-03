#include <stdio.h>
#include <string.h>
void main()
{
	char name1[]="Dane";
  char name2[]="Hay";
	char tmp[100];
	char name[] = "Dane is Cute!\nDane is Smart\nDane is 19 years old\nDane loves programming\nBe like Dane\n";
	const char name3 = 'a';
	printf("\nname1 = %s \nname2 = %s ",name1,name2);
	printf("\nstrlen(name1) = %d",(strlen(name1)));
	printf("\nstrchr = %c - %s ",name3,strchr(name2,name3));
	printf("\nstrcat is %s",strcat(name1,name2));
	if(strcmp(name1,name2)==0)
		printf("\nstrcmp : name the same");
	else
		printf("\nstrcmp : name isn't the same");
	printf("\nstrcpy = %s",strcpy(name1,name2));
	sprintf(tmp,"\n[sprintf]\n%s",name);
	printf(tmp);
}