CC = gcc
CFLAGS = -I./src -Wall -Wextra

SRC_FILES = src/array.c src/operations.c src/utils.c
TEST_FILES = tests/test_array.c tests/test_operations.c tests/test_utils.c

all: test_array test_operations test_utils

test_array: $(SRC_FILES) tests/test_array.c
    $(CC) $(CFLAGS) -o test_array $(SRC_FILES) tests/test_array.c

test_operations: $(SRC_FILES) tests/test_operations.c
    $(CC) $(CFLAGS) -o test_operations $(SRC_FILES) tests/test_operations.c

test_utils: $(SRC_FILES) tests/test_utils.c
    $(CC) $(CFLAGS) -o test_utils $(SRC_FILES) tests/test_utils.c

clean:
    rm -f test_array test_operations test_utils