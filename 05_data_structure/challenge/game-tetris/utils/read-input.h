#ifndef READ_INPUT_H
#define READ_INPUT_H

#include <stddef.h>

/**
 * @brief Reads input from standard input into the provided buffer.
 * @param buf Pointer to the buffer where the input will be stored
 * @param size Size of the buffer
 */
void read_input(char* buf, size_t size);

#endif // READ_INPUT_H