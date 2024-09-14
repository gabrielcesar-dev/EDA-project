# Password Sorting Project

## Author

- **Gabriel Cesar Silvino Xavier**

## University Course

This project was developed as part of the **Estrutura de Dados (EDA)** course in the Computer Science program.

## Project Overview

The project aims to compare the performance of various sorting algorithms when applied to a list of passwords. The input file, `passwords.txt`, contains sample data representing a set of passwords, with each line including a password’s length, frequency of use, and the password itself.

The project implements and compares several sorting algorithms studied during the course, including:
- Bubble Sort
- Selection Sort
- Insertion Sort
- Merge Sort
- Quick Sort
- Heap Sort

For each algorithm, the program records the time taken to sort the passwords in alphabetical order and produces a table comparing their execution times.

## Deployment

### 1. Compile

To compile the project, use the following command:

```bash
make
```

### 2. Run

To run the program with the default file (`./passwords.txt`), use:

```bash
make run
```

Alternatively, you can run the program directly by specifying a parameter for the file containing passwords:

```bash
./bin/main <parameter>
```

- `<parameter>`: A file containing passwords in the specified format.
