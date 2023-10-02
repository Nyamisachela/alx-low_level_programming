#ifndef _MAIN_H_
#define _MAIN_H_

#include <stddef.h> /* For size_t*/
#include <sys/types.h> /* For ssize_t*/

ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */
