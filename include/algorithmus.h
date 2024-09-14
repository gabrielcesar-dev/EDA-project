#ifndef ALGORITHMUS_H
#define ALGORITHMUS_H

struct password;

typedef struct algorithm{
    const char *name;
    void (*function)(struct password *, int);
}algorithm;

extern const algorithm algorithmus[];
extern const int SIZE_ALGORITHMUS;

#endif