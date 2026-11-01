target = main.o stu_add.o stu_del.o stu_show.o stu_save.o stu_sort.o stu_del_all.o stu_mod.o stu_rev.o
CC=cc
exe : ${target}
	${CC} $(target) -o exe
main.o : main.c
	${CC} -c $^
stu_add.o : stu_add.c
	${CC} -c $^
stu_del.o : stu_del.c
	${CC} -c $^
stu_show.o : stu_show.c
	${CC} -c $^
stu_save.o : stu_save.c
	${CC} -c $^
stu_sort.o : stu_sort.c
	${CC} -c $^
stu_del_all.o : stu_del_all.c
	${CC} -c $^
stu_mod.o : stu_mod.c
	${CC} -c $^
stu_rev.o : stu_rev.c
	${CC} -c $^
clear:
	@echo "cleaning up..."
	@rm -vr*.o

