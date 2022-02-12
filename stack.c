#include "stack.h"

stack * create_stack(int size, STACK_ERR *err) 
{
	if (size <= 0) {
		if (err != NULL)
			*err = EINVARG;
		fprintf(stderr, "Size error\n");
		return NULL;
	}
	stack * s = (stack *)malloc(sizeof(stack));
	if (s == NULL) {
		fprintf(stderr, "Stack create ERROR\n");
		return NULL;
	}
	s->arr = (int*)malloc(size * sizeof(int));
	if (s->arr == NULL) {
		fprintf(stderr, "Array ERROR\n");
		return NULL;
	}
	s->size = size;
	s->crt = 0;
	return s;
}

void remove_stack(stack * s, STACK_ERR *err) 
{
	if (s == NULL) {
		fprintf(stderr, "Not Empty Stack\n");
		return;
	}
	free (s->arr);
	free(s);
}

int pop(stack * s, STACK_ERR *err) 
{
	if (s == NULL) {
		fprintf(stderr, "Stack_pop error\n");
		return -1;
	}
	if (s->crt == 0) {
		fprintf(stderr, "Stack is empty\n");
		return -1;
	}
	return s->arr[-- s->crt];
}

void push(stack * s, int val, STACK_ERR *err) 
{
	if (s == NULL) {
		fprintf(stderr, "Stack_push error\n");
		return;
	}
	if (s->crt == s->size) {
		fprintf(stderr, "Stack is full\n");
		return;
	}
	s->arr[s->crt ++] = val;
}
	