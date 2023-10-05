CC=@gcc
FLAG=-D_FORTIFY_SOURCE=2 -g3 -O2 -pedantic -pie -std=c17 -Wall -Werror

all:
	@echo Making prac...
	${CC} prac.c -o prac.exe ${LIB} ${FLAG}
	@echo Success!
	@echo

clean:
	@echo Cleaning...
	@echo Deleting a, exe, o files
	@rm -f *.a *.exe *.o
	@echo Success!
	@echo