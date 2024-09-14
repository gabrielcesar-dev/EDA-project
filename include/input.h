#ifndef INPUT_H
#define INPUT_H

#include <stdio.h>

struct password;

extern void fopenHandler(FILE *file);
extern void mallocHandler(struct password  *lines); 
extern int countLines(FILE *file);
extern struct password* input (FILE *file);

#endif