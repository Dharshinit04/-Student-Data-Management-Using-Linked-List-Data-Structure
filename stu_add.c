#include"header.h"

void stu_add(sdb **ptr)
{       
	int i=1;
        sdb *new,*temp=*ptr,*pos;
	new=malloc(sizeof(sdb));
l1:	new->rollno=i++;
        temp=*ptr;
	while(temp)   	
	{ 
		if(temp->rollno == new->rollno)
			goto l1;
		temp=temp->next;
	}
l:	printf("enter the details\n");
	scanf("%s%f",new->name,&new->percentage);
	if(new->percentage >=0 && 100 <= new->percentage )
	{
		printf("percentage not in range \n TRY AGAIN\n");
		goto l;
	}
	temp=*ptr;
	if(*ptr==0)
	{
		new->next=*ptr;
		*ptr=new;
	}
	else
        {
           pos=*ptr;
          while((pos->next!=0) &&(new->rollno > pos->next->rollno))
           pos=pos->next;
       new->next=pos->next;
       pos->next=new;
        }  
}

