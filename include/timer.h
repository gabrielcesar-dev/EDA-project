#ifndef TIMER_H
#define TIMER_H

struct password;

extern double executionTime (void (*function)(struct password*, int), struct password *array, int size);

#endif