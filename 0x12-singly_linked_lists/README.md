# 0x12. C - Singly linked lists

## Description

Tasks on singly linked lists.

What I learned from the tasks:

* When to use linked lists vs arrays
* How to build and use linked lists

---

## General Requirements
* Allowed editors: vi, vim and emacs.
* All files were created and compiled on Ubuntu 20.04.4 LTS using using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89```
* Code checked with betty-style.pl and betty-doc.pl

---

# Tasks

These are all the tasks of this project, the ones that are completed link to the corresponding files.

### [0. Print list](./0-print_list.c)
* Function that prints all the elements of a list_t list.
  - Prototype: size_t print_list(const list_t *h);
  - Return: the number of nodes
  - If str is NULL, print [0] (nil)
  - printf is allowed

### [1. List length](./1-list_len.c)
* Function that returns the number of elements in a linked list_t list.
	- Prototype: size_t list_len(const list_t *h);

### [2. Add node](./2-add_node.c)
* Function that adds a new node at the beginning of a list_t list.
	- Prototype: list_t *add_node(list_t **head, const char *str);
	- Return: the address of the new element, or NULL if it failed
	- str needs to be duplicated
	- strdup is allowed

### [3. Add node at the end](./3-add_node_end.c)
* Function that adds a new node at the end of a list_t list.
	- Prototype: list_t *add_node_end(list_t **head, const char *str);
	- Return: the address of the new element, or NULL if it failed
	- str needs to be duplicated
	- strdup is allowed

### [4. Free list](./4-free_list.c)
* Function that frees a list_t list.
	- Prototype: void free_list(list_t *head);

### [5. The Hare and the Tortoise](./100-first.c)
* Function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.
	- printf is allowed

---

### Author
* **Dominic Samo** - (https://github.com/DominicSamoes)
