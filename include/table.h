#ifndef TABLE_H
#define TABLE_H


extern void tableHeader(int cols);
extern void tableRow(int rows, int cols, const double data, const char *algorithm);
#endif