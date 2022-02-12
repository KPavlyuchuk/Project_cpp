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

stack * create_stack(int size);
void remove_stack (stack * s);
int pop(stack * s);
void push (stack * s, int val);
