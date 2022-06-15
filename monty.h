#ifndef MONTY_H
#define MONTY_H
#include <ctype.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

/* data structures */

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcoode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line);
} instruction_t;

/* stack and queue operations */
void free_dlist(stack_t **h);
void delete_end_node(stack_t **h);
int add_end_node(stack_t **h, int n);

/* opcodes */
void (*fetch_op_func(char *token1))(stack_t **stack, unsigned int line);
void push(stack_t **h, unsigned int line, const char *n);
void pint(stack_t **h, unsigned int line);
void pall(stack_t **h, unsigned int line);
void pop(stack_t **h, unsigned int line);
void nop(stack_t **h, unsigned int line);
void pchar(stack_t **h, unsigned int line);
void pstr(stack_t **h, unsigned int line);
void rotl(stack_t **h, unsigned int line);
void rotr(stack_t **h, unsigned int line);
void swap(stack_t **h, unsigned int line);

/* arithmetic ops */
void _div(stack_t **h, unsigned int line);
void _sub(stack_t **h, unsigned int line);
void _add(stack_t **h, unsigned int line);
void _mod(stack_t **h, unsigned int line);
void _mul(stack_t **h, unsigned int line);

#endif
