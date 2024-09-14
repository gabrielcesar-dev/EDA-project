#ifndef CONSTANTS_H
#define CONSTANTS_H

extern const char *INPUT_FILE;

typedef struct password password;

struct password{
  char *value;
  int length;
  int frequency;
};

#endif
