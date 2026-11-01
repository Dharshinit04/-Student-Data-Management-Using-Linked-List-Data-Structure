#include "header.h"

void stu_del_all(sdb **ptr)
{
if(*ptr==0)
{
printf("No records found\n");
return;
}
sdb *del=*ptr;
int c=1;
while(del)
{
*ptr=del->next;
printf("node:%d deleted\n",c+1);
sleep(1);
free(del);
del=*ptr;
}
}

