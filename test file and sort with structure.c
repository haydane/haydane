#include <stdio.h>
#include <conio.h>
#include <alloc.h>
typedef struct
	{
		char name[20],item[20];
		int id,unit,pri;
	} emp;
	emp em;
	FILE *fp; 
	FILE *tmp;
	int i,j,n,x,y=59;
	int id1,id2;
void input(void);
void output(void);
void del(void);
void update(void);
void main()
{	
	clrscr();
	nene:
	gotoxy(30,5);
	printf("1. input data\n");
	gotoxy(30,6);
	printf("2. output data\n");
	gotoxy(30,7);
	printf("3. Delete data\n");
	gotoxy(30,8);
	printf("4. Update data\n");
	switch(getch())
	{
		case'1': input(); break;
		case'2': output(); break;
		case'3': del(); break;
		case'4': update(); break;
	} 
	getch(); clrscr(); goto nene;
}
	void input()
	{	
		fp=fopen("Data.bin","ab");
		clrscr();
		do
			{
				printf("\nID: ");
				scanf("%d",&em.id);
				printf("Name: ");
				fflush(stdin);
				gets(em.name);
				printf("Item: ");
				gets(em.item);
				printf("Unit: ");
				scanf("%d",&em.unit);
				printf("Price: ");
				scanf("%d",&em.pri);
				fwrite(&em,sizeof(emp),1,fp);
				printf("\n<enter> to continue...\n");
				} while(getch()==13);
				fclose(fp);
	}
	void output()
	{	
		emp *em,tmp;
		fp=fopen("Data.bin","rb");
		clrscr();
		if(fp==NULL)
			puts("File not found");
		else
		{
			fseek(fp,0,2);
			n=ftell(fp)/sizeof(emp);
			em=(emp*)calloc(n,sizeof(emp));
			rewind(fp);
			fread(em,sizeof(emp),n,fp);
			fclose(fp);
			for(i=0;i<n-1;i++)
				for(j=i+1;j<n;j++)
					if(em[i].id>em[j].id)
					{
						tmp=em[i];
						em[i]=em[j];
						em[j]=tmp;
					}
			printf(" ID%3c\tName%9c\tItem%9c\tUnit%3c\tPrice %5c\n",176,176,176,176,176,176);
			for(i=0;i<y;i++) //y=59
				printf("%c",176);
			printf("\n");
			for(i=0;i<n;i++)
				printf("%c%d\t%s\t\t%s\t\t%d\t$%-9d%c\n",176,em[i].id,em[i].name,em[i].item,em[i].unit,em[i].pri,176);
				free(em);	
		}
		for(i=0;i<y;i++)
				printf("%c",176);


	}	
	void del()
	{
		//emp *em;
		int id;

		clrscr();
		output();
		fp=fopen("Data.bin","rb");
		/*fseek(fp,0,2);
		n=ftell(fp)/sizeof(emp);
		em=(emp*)calloc(n,sizeof(emp));
		rewind(fp);
		fread(em,sizeof(emp),n,fp);
		fclose(fp); */
		tmp=fopen("tmp","wb+");
		printf("\n\nDelete ID: ");
		scanf("%d",&id);
		while(fread(&em,sizeof(em),1,fp)==1) 
		if(em.id!=id)
			fwrite(&em,sizeof(em),1,tmp); 


		/*for(i=0;i<n;i++)
		if(em[i].id==id)
		{
			n--;
			for(j=i;j<n;j++)
				em[j]=em[j+1];
			i--;
		}
		clrscr();
		puts("ID\tName\t\tItem\t\tUnit\tPrice");
		for(i=0;i<n;i++)
		{
		printf("%d\t%s\t\t%s\t\t%d\t%d$\n",em[i].id,em[i].name,em[i].item,em[i].unit,em[i].pri);
		fp=fopen("Data.bin","wb");
		fwrite(em,sizeof(emp),n,fp);
	}
		fclose(fp);
		free(em);
	}*/
		fclose(fp);
		fclose(tmp);
		remove("Data.bin");
		rename("tmp","Data.bin");
	//getch();
		output();

	}

void update()
{	
	output();
	printf("\n\nUpdate ID: ");
	scanf("%d",&id1);
	rewind(fp);
	fp=fopen("Data.bin","r+b");
	while(fread(&em,sizeof(emp),1,fp)==1)
	{	
		x=sizeof(emp);
		if(em.id==id1)     
		{
		printf("New ID: "); 
		scanf("%d",&em.id);
		fseek(fp,-x,1);
		fwrite(&em,sizeof(emp),1,fp);
		fseek(fp,0,1);
		}
	}
	getch();
	clrscr();
	output();
}

