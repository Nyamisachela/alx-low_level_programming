#ifndef _MAIN_H_
#define _MAIN_H_

#include <stddef.h> /* For size_t*/
#include <sys/types.h> /* For ssize_t*/

ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);

#endif /* MAIN_H */
