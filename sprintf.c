#include <stdio.h>
#include <string.h>
void main()
{
	char tmp[100];
	char name[] = "Dane is Cute!\nDane is Smart\nDane is 19 years old\nDane loves programming\nBe like Dane\n";
	sprintf(tmp,"%s",name);
	printf(tmp);
}