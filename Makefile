COMPILER_C := clang
COMPILER_CPP := clang++

OPT_LVL := -O2

C_FLAGS := -ansi $(OPT_LVL) -Wall
CPP_FLAGS := -ansi $(OPT_LVL) -Wall


build_test_main_c:
	$(COMPILER_C) $(C_FLAGS) ./test/main.c -o ./test/main.out

run_test_main_c:
	./test/main.out

test_main: build_test_main_c run_test_main_c
