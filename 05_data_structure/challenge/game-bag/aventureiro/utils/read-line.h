#ifndef READ_LINE_H
#define READ_LINE_H

#include <stddef.h>

/**
 * @brief Reads a line from standard input into the provided buffer.
 * @param buf Pointer to the buffer where the line will be stored
 * @param size Size of the buffer
 */
void read_line(char* buf, size_t size);

#endif