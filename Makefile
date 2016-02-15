CC := clang

OPT_LVL := -O2

C_FLAGS := -ansi $(OPT_LVL) -Wall


all: build_test run_test

build_test:
	$(CC) $(C_FLAGS) ./test/main.c -o ./test/main

run_test:
	./test/main

clean:
	$(RM) ./test/main *.o *~
