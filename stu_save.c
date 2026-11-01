#include "header.h"

void stu_save(sdb *ptr)
{
if(ptr==0)
{
printf("No records found\n");
return;
}
FILE *fp;
fp=fopen("student.data","w");
while(ptr)
{
fprintf(fp,"%d %s %.2f\n",ptr->rollno,ptr->name,ptr->percentage);
ptr=ptr->next;
}
printf("Data saved in file\n");
printf("***********************\n");
fclose(fp);
}

