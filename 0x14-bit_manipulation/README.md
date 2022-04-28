# 0x14. C - Bit manipulation

## Description

Tasks on .

What I learned from the tasks:

* How to manipulate bits and use bitwise operators

---

## General Requirements
* Allowed editors: vi, vim and emacs.
* All files were created and compiled on Ubuntu 20.04.4 LTS using using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* Code checked with betty-style.pl and betty-doc.pl

---

# Tasks

These are all the tasks of this project, the ones that are completed link to the corresponding files.

### [0. 0](./0-binary_to_uint.c)
* Function that converts a binary number to an unsigned int.
  - Prototype: unsigned int binary_to_uint(const char *b);
  - where b is pointing to a string of 0 and 1 chars
  - Return: the converted number, or 0 if
	+ there is one or more chars in the string b that is not 0 or 1
	+ b is NULL

### [1. 1](./1-print_binary.c)
* Function that returns the value of a bit at a given index.
	- Prototype: int get_bit(unsigned long int n, unsigned int index);
	- where index is the index, starting from 0 of the bit you want to get
	- Returns: the value of the bit at index index or -1 if an error occured

### [2. 10](./2-get_bit.c)
* Function that returns the value of a bit at a given index.
	- Prototype: int get_bit(unsigned long int n, unsigned int index);
	- where index is the index, starting from 0 of the bit you want to get
	- Returns: the value of the bit at index index or -1 if an error occured

### [3. 11](./3-set_bit.c)
* Function that sets the value of a bit to 1 at a given index.
	- Prototype: int set_bit(unsigned long int *n, unsigned int index);
	- where index is the index, starting from 0 of the bit you want to set
	- Returns: 1 if it worked, or -1 if an error occurred

 


---

### Author
* **Dominic Samo** - (https://github.com/DominicSamoes)
