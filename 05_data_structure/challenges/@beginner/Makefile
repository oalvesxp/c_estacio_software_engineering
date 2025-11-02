TARGET = program
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

SRC = main.c \
      utils/read-line.c \
      modules/item/main.c \
      modules/menu/main.c

OBJ = $(SRC:.c=.o)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: clean
