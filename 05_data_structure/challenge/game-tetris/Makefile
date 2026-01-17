TARGET = program
CC =	gcc
CFLAGS = -Wall -Wextra -std=c11	

SRC = main.c \
			modules/tetrisParts/part.c \
			modules/circularQueue/queue.c \
			# modules/reservedParts/*.c \
			# utils/heap.c

OBJ = $(SRC:.c=.o)
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: clean
