#include"header.h"

void stu_mod(sdb *ptr)
{
char op;
printf("press r/R to search for rollno\npress n/N to search by name\npress p/P to search by percentage\n");
printf("enter ur option\n");
scanf(" %c",&op);
if(op>='A' && op<='Z')
op=op+32;
switch(op)
{
case 'r':search_by_rollno(ptr); break;
case 'n':search_by_name(ptr); break;
case 'p':search_by_percentage(ptr);break;
case 'e':break;
default:printf("invalid option\n");
}
}
void search_by_rollno(sdb *ptr)
{
	if(ptr==0)
	{
		printf("no data found\n");
		return ;
	}
	int roll,k=0;
	sdb *s=ptr,*prev=ptr,*t=ptr;
	printf("enter the roll no to search\n");
	scanf("%d",&roll);
	while(s)
	{
		if(s->rollno==roll)
			k=1;
		s=s->next;
	}
	if(k==0)
	{	
printf("ROLLNO NOT FOUND\n");
return ;
}
	s=ptr;

	while(s)
	{
		if(s->rollno==roll)
		{
			char s1[90];
			float f;
			printf("enter the name and precentage to change\n");
			scanf("%s%f",s1,&f);
			strcpy(s->name,s1);
	s->percentage=f;
		}
		s=s->next;
	}
}

void search_by_name(sdb *ptr)
{
	if(ptr==0)
	{
		printf("no data found\n");
		return ;
	}
	int k=0,c=0;
	char name[90];
	printf("enter the name to delete\n");
	scanf("%s",name);
	sdb *s=ptr,*prev=ptr,*t=ptr;
	while(s)
	{
		if(strcmp(s->name,name)==0)
			c++;
		s=s->next;
	}
	s=ptr;
	if(c==0)
	{          printf("NAME NOT FOUND\n");

		return ;
	}
	else if(c==1)
	{
		while(s)
		{
			if(strcmp(s->name,name)==0)
			{
				char s2[90];
				float f;
				printf("enter the name and precentage to change\n");
	scanf("%s%f",s2,&f);
				strcpy(s2,s->name);
				s->percentage=f;
			}
			s=s->next;
		}
	}
	else if(c>1)
	{
		while(s)
		{
			if(strcmp(s->name,name)==0)
				printf("%d %s  %f\n",s->rollno,s->name,s->percentage);
			s=s->next;
		}
	}
	search_by_rollno(ptr);
}



void search_by_percentage(sdb *ptr)
{
	if(ptr==0)
	{
		printf("no data found\n");
		return ;
	}
	int k=0,c=0;
	float f;
	printf("enter the perce to delete\n");
	scanf("%f",&f);
	sdb *s=ptr,*prev=ptr,*t=ptr;
	while(s)
	{
		if(s->percentage == f)
			c++;
		s=s->next;
	}
	s=ptr;
	if(c==0)
	{          printf("NAME NOT FOUND\n");

		return ;
	}
	else if(c==1)
	{
		while(s)
	{
			if(s->percentage == f)
			{
				char s3[90];
				float f;
				printf("enter the name and precentage to change\n");
				scanf("%s%f",s3,&f);
				strcpy(s3,s->name);
				s->percentage=f;
			}
		s=s->next;
	}
	}
	//s=ptr;
	else if(c>1)
	{	s=ptr;
	
	while(s)
		{
			if(s->percentage == f)
				printf("%d %s  %.2f\n",s->rollno,s->name,s->percentage);
			s=s->next;
		}
	
	search_by_rollno(ptr);
	}
}

