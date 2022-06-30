# 0x1A. C - Hash tables

## Description

Tasks on .

What I learned from the tasks:

* What makes a good hash function
* What is a hash table, how do they work and how to use them
* What is a collision and what are the main ways of dealing with collisions in the context of a hash table
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables

---

## General Requirements
* Allowed editors: vi, vim and emacs.
* All files were created and compiled on Ubuntu 20.04.4 LTS using using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89```
* Code checked with betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are allowed to use the C standard library
* The prototypes of all your functions should be included in your header file called hash_tables.h
* Don’t forget to push your header file
* All your header files should be include guarded
---

# Tasks

These are all the tasks of this project, the ones that are completed link to the corresponding files.

### [0. >>> ht = {}](./0-hash_table_create.c)
* Write a function that creates a hash table.
  	- Prototype: hash_table_t *hash_table_create(unsigned long int size);
where size is the size of the array
	- Returns a pointer to the newly created hash table
	- If something went wrong, your function should return NULL


### [1. djb2](./1-djb2.c)
* Write a hash function implementing the djb2 algorithm.

	- Prototype: unsigned long int hash_djb2(const unsigned char *str);

### [2. key -> index](./2-key_index.c)
* Write a function that gives you the index of a key.
	- Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);
		+ where key is the key
		+ and size is the size of the array of the hash table
	- This function should use the hash_djb2 function that you wrote earlier
	- Returns the index at which the key/value pair should be stored in the array of the hash table
	- You will have to use this hash function for all the next tasks


### [3. >>> ht['betty'] = 'cool'](./3-hash_table_set.c)
* Write a function that adds an element to the hash table.
	- Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);
		+ Where ht is the hash table you want to add or update the key/value to
		+ key is the key. key can not be an empty string
		+ and value is the value associated with the key. value must be duplicated. value can be an empty string
	- Returns: 1 if it succeeded, 0 otherwise
	- In case of collision, add the new node at the beginning of the list

### [4. >>> ht['betty']](./4-hash_table_get.c)
* Write a function that retrieves a value associated with a key.

	- Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
		+ where ht is the hash table you want to look into
		+ and key is the key you are looking for
	- Returns the value associated with the element, or NULL if key couldn’t be found

---

### Author
* **Dominic Samo** - (https://github.com/DominicSamoes)
