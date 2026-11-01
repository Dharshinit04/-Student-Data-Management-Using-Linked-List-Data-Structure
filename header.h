#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student{
int rollno;
char name[50];
float percentage;
struct student *next;
}sdb;

void stu_add(sdb **ptr);
void stu_del(sdb **ptr);
void stu_show(sdb *ptr);
void stu_mod(sdb *ptr);
void stu_save(sdb *ptr);
void stu_sort(sdb *ptr);
void stu_del_all(sdb **ptr);
void stu_rev(sdb **ptr);
void stu_read(sdb **ptr,char *s);

void sort_by_name(sdb *ptr);
void sort_by_percentage(sdb *ptr);
void sort_by_rollno(sdb *ptr);
 
void del_by_roll(sdb **ptr); 
void del_by_name(sdb **ptr);

void search_by_rollno(sdb *ptr); 
void search_by_name(sdb *ptr);
void search_by_percentage(sdb *ptr);

