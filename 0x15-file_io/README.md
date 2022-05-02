# 0x15. C - File I/O

## Description

Tasks on .

What I learned from the tasks:

* How to create, open, close, read and write files
* What file descriptors are
* What the  3 standard file descriptors are, their purpose and what their POSIX names are
* How to use the I/O system calls open, close, read and write
* What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
* What file permissions are, and how to set them when creating a file with the open system call ar* What a system call is
* The difference between a function and a system call

---

## General Requirements
* Allowed editors: vi, vim and emacs.
* All files were created and compiled on Ubuntu 20.04.4 LTS using using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89```
* Code checked with betty-style.pl and betty-doc.pl

---

# Tasks

These are all the tasks of this project, the ones that are completed link to the corresponding files.

### [0. ]Tread lightly, she is near(./0-read_textfile.c)
*  Function that reads a text file and prints it to the POSIX standard output.
  - Prototype: ssize_t read_textfile(const char *filename, size_t letters);
  - where letters is the number of letters it should read and print
  - returns the actual number of letters it could read and print
  - if the file can not be opened or read, return 0
	- if filename is NULL return 0
	- if write fails or does not write the expected amount of bytes, return 0


---

### Author
* **Dominic Samo** - (https://github.com/DominicSamoes)
