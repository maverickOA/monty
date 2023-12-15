#include "monty.h"

/**
 * _closefile - Close a given file.
 *
 * @file: The memory address to the file to close
 *
 **/
void close_file(FILE *file)
{
	fclose(file);
}
