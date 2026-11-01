#include "header.h"

int main()
{
sdb *headptr=0;
int op;
while(1)
{
printf("1)ADD_DATA\n 2)DELETE_DATA\n 3)DISPLAY_DATA\n 4)MODIFY_DATA\n 5)SAVE_DATA\n 6)SORT_DATA\n 7)DELETE_ALL\n 8)REVERSE\n 9)EXIT\n");
printf("enter your choice:\n");

scanf("%d",&op);
switch(op)
{
case 1:stu_add(&headptr);
break;

case 2:stu_del(&headptr);
break;

case 3:stu_show(headptr);
break;

case 4:stu_mod(headptr);
break;

case 5:stu_save(headptr);
break;

case 6:stu_sort(headptr);
break;

case 7:stu_del_all(&headptr);
break;

case 8:stu_rev(&headptr);
break;

case 9:exit(0);

default :printf("no record found\n");
break;
}
}
}

