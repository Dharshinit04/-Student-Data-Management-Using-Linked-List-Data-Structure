#include "header.h"

void stu_rev(struct student **head)
{
	if(*head==0)
	{
		printf("no records found\n");
		return;
	}
	int c=0,i;
	struct student *temp=*head,**p,*t=*head;
	while(temp)
	{
		c++;
		temp=temp->next;
	}
	if(c>1)
	{
		p=malloc(sizeof(struct student *)*c);
		for(i=0;i<c;i++)
		{
			p[i]=t;
			t=t->next;
	}
		for(i=c-1;i>0;i--)
			p[i]->next=p[i-1];
		p[0]->next=0;
		*head=p[c-1];
	}

	printf("List reversed successfully.\n");
}

