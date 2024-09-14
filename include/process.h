#ifndef PROCESS_H
#define PROCESS_H

#define CHIELD 0

struct password;
struct algorithm;

extern void processHandler (int pid, struct password *array, struct algorithm process, int sizeLines);

#endif