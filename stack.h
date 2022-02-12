#include <stdlib.h>
#include <stdio.h>

typedef struct stack {
	int size;
	int crt;
	int * arr;	
} stack;

typedef enum {
	ESUCCESS = 0,
	EINVARG,
	EFULL,
	EEMPTY,
	EALLOC
} STACK_ERR;

stack * create_stack(int size, STACK_ERR *err);
void remove_stack (stack * s, STACK_ERR *err);
int pop(stack * s, STACK_ERR *err);
void push (stack * s, int val, STACK_ERR *err);
