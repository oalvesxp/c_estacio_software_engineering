TARGET = program
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

SRC = main.c \
			modules/item/item.c \
			modules/menu/menu.c \
			# utils/*.c \
			# modules/*/*.c

OBJ = $(SRC:.c=.o)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: clean
